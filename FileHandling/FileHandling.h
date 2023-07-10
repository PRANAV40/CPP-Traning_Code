#pragma once
#include<iostream>
#include<fstream> 
#include<string>
#include<thread>
#include<mutex>
using namespace std;

mutex mtx;
class fileHandling
{
public:
	void copyFile();
};

