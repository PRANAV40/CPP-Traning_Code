#include "Multithreading.h"

void copyFile(const string& sourceFileName, const string& destinationFileName) { //herte we pass parameter as reference
    ifstream sourceFile(sourceFileName, ios::binary);       //Take the input into the file
    ofstream destinationFile(destinationFileName, ios::binary); //Give the output into the file
    //ofstream anotherdestinationFile( anotherdestinationFileName, ios::binary); //Give the output into the file
    
    if (sourceFile && destinationFile ) {
        // Obtain the file size
        sourceFile.seekg(0, ios::end);
        streampos fileSize = sourceFile.tellg();     //tellg() is a current pointer position
        sourceFile.seekg(0, ios::beg);

        // Create a buffer to hold the file data
        const size_t bufferSize = 4096;
        char buffer[bufferSize];

        // Copy the data from source file to destination file
        while (fileSize > 0) {
            size_t bytesRead = min(bufferSize, static_cast<size_t>(fileSize));
            sourceFile.read(buffer, bytesRead);
            destinationFile.write(buffer, bytesRead);
            fileSize -= bytesRead;
        }
        sourceFile.close();
        destinationFile.close();
        anotherdestinationFile.close();

        // Lock the mutex to synchronize console output
        lock_guard<mutex> lock(mtx);
        cout << "File copied successfully." << endl;
    }
    else {
        // Lock the mutex to synchronize console output
        lock_guard<mutex> lock(mtx);
        cout << "Error opening files." << endl;
    }
}
void anothercopyFile(const string& destinationFileName, const string& destinationFileName1) {

}

int main() {
    string sourceFileName = "source.txt";
    string destinationFileName = "destination1.txt";
    string newdestinationFileName = "DestinationFileName.txt";

    // Create a thread to copy the file
    thread t(copyFile, sourceFileName, destinationFileName);
    thread t(copyFile, sourceFileName, destinationFileName, newdestinationFileName);

    // Wait for the thread to finish
   t.join();

    return 0;
}