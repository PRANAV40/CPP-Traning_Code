#pragma once
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int myAmount = 0;
std::mutex m;
class Mutex
{
public:
	void addMoney();
};

