#include "Header.h"

int main() {
	ull start = 0, end = 190000000;

	ull OddSum = 0;
	ull EvenSum = 0;

	auto startTime = high_resolution_clock::now();  //Now give the current time while executing the line of code

	// // WITH THREAD
	std::thread t1(findEven, start, end, &(EvenSum));
	std::thread t2(findOdd, start, end, &(OddSum));

	t1.join();   
	t2.join();

	// // WITHOUT THREAD
	//findEven(start,end, &EvenSum);
	//findOdd(start, end, &OddSum);
	auto stopTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stopTime - startTime);

	cout << "OddSum : " << OddSum << endl;
	cout << "EvenSum : " << EvenSum << endl;

	cout << "Sec: " << duration.count() / 1000000 << endl;
		return 0;
	}