#pragma once
#include <iostream>
#include <iostream>
#include <thread>
#include <mutex>
#include <windows.h>
#include <Mtx.h>
#include <io.h>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;


//This program is for critical section
mutex mtx; 
class criticalSection {
public:
    void criticalSectionfun();
};
