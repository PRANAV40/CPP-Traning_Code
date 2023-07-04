#include <iostream>
#include <fstream>
#include<thread>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;

void writeFile() {
    ofstream file;
    file.open("example.txt");

    if (file.is_open()) {
        file << "This is an example text file." << std::endl;
        file.close();
    } else {
        cout << "Error: Unable to open file." << std::endl;
    }
}

int main() {
    
    std::thread t(writeFile);
    t.join();
    std::cout << "File created successfully!" << std::endl;
    return 0;
}
