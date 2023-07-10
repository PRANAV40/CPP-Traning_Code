#include "FileHandling.h"

void fileHandling :: copyFile() {
	char c;
	ifstream myfile("Test.txt");
	ofstream o_file("Test2.txt");
	if (myfile.is_open())
	{
		while (myfile.get(c))
		{
			o_file.put(c);
		}
		myfile.close();
		o_file.close();
	}
	ifstream i1_file("Test2.txt");
	ofstream o1_file("Test3.txt");
	if (i1_file.is_open())
	{
		while (i1_file.get(c))
		{
			o1_file.put(c);
		}
		i1_file.close();
		o1_file.close();
	}
	ifstream i2_file("Test3.txt");
	ofstream o2_file("Test.txt");
	while (i2_file.get(c))
	{
		o2_file.put(c);
	}

	i2_file.close();
	o2_file.close();
	cout << "File copied successfully...... ";
}
int main() {
	fileHandling objFile;
	objFile.copyFile();
	return 0;
}


/*
string sourceFileName = "Test.txt";
	string destinationFileName = "Test2.txt";
	string anotherdestinationFileName = "Test3.txt";
	thread t(copyFile, sourceFileName, destinationFileName, anotherdestinationFileName);

	// Wait for the thread to finish
	t.join();
*/