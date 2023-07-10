#include "Mutex.h"

   //We can use mutex when race condition is occure 

void addMoney() {
	m.lock();        //Before accessing the ciritcal section you must Lock the mutex and this is also called Blocking call
	++myAmount;      //Race condition, Critical region
	m.unlock();      //After completing the ciritcal section you must Unlock the mutex
}
int main() {
	thread t1(addMoney);
	thread t2(addMoney);

	t1.join();
	t2.join();

	cout << "The amount is " << myAmount << endl;
	return 0;
}