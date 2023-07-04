// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main() {
//     string filename1 = "input.txt";   // Name of the input file
//     string filename2 = "output.txt";  // Name of the output file
//     ifstream fin(filename1);          // Open input file for reading
//     ofstream fout(filename2);         // Open output file for writing

//     if (fin.fail()) {
//         cout << "Error opening input file." << endl;
//         return 1;
//     }

//     if (fout.fail()) {
//         cout << "Error opening output file." << endl;
//         return 1;
//     }

//     // Copy data from input file to output file
//     string line;
//     while (getline(fin, line)) {
//         fout << line << endl;
//     }

//     // Close files
//     fin.close();
//     fout.close();

//     cout << "Data copied successfully." << endl;
//     return 0;
// }
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename = "input.txt";
    string outputFilename = "output.txt";

    // create file stream object for reading from input file
    ifstream inputFile;
    inputFile.open(filename);

    // check if file was opened successfully
    if (!inputFile.is_open()) {
        cout << "Failed to open input file " << filename << endl;
        return 1;
    }

    // create file stream object for writing to output file
    ofstream outputFile;
    outputFile.open(outputFilename);

    // check if file was opened successfully
    if (!outputFile.is_open()) {
        cout << "Failed to open output file " << outputFilename << endl;
        return 1;
    }

    // read data from input file and copy to output file
    string line;
    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }

    // close file streams
    inputFile.close();
    outputFile.close();

    cout << "Data copied successfully from " << filename << " to " << outputFilename << endl;

    return 0;
}
