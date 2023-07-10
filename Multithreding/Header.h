#pragma once
#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

ull OddSum = 0;
ull EvenSum = 0;

void findEven(ull start, ull end, ull* EvenSum) {
	for (ull i = start; i <= end; ++i) {
		if (!(i & 1)) {
			*(EvenSum) += i;
		}
	}
}

void findOdd(ull start, ull end, ull* OddSum) {
	for (ull i = start; i <= end; ++i) {
		if (i & 1) {
			(*OddSum) += i;
		}
	}
}