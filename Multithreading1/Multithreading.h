#pragma once
#include <iostream>
#include <fstream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;
class Multithreading {
public:
    void copyFile(const string& sourceFileName, const string& destinationFileName);
};
