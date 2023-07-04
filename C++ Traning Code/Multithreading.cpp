#include <iostream>
#include <fstream>
#include <thread>
#include <mutex>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	char input[75];
	ofstream os;
	os.open("testout.txt");
	cout << "Writing to a text file:" << endl;
	cout << "Please Enter your name: ";
	cin.getline(input, 100);
	os << input << endl;
	cout << "Please Enter your age: ";
	cin >> input;
	cin.ignore();
	os << input << endl;
	os.close();
	ifstream is;
	string line;
	is.open("testout.txt");
	cout << "Reading from a text file:" << endl;
	while(getline(is, line))
	{
		cout << line << endl;
	}
	is.close();
	return 0;
}


  
// int main()
// {
//     string line;
//     // For writing text file
//     // Creating ofstream & ifstream class object
//     ifstream ini_file{
//         "original.txt"
//     }; // This is the original file
//     ofstream out_file{ "copy.txt" };
//     if (ini_file && out_file) {
  
//         while (getline(ini_file, line)) {
//             out_file << line << "\n";
//         }
//         cout << "Copy Finished \n";
//     }
//     else {
//         // Something went wrong
//         printf("Cannot read File");
//     }
//     // Closing file
//     ini_file.close();
//     out_file.close();
//     return 0;
// }