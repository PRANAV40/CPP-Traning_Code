#include "Multithreading.h"

void criticalSectionfun() {
    lock_guard<mutex> lock(mtx); // Lock the mutex
    
    // Critical section code
    std::cout << "Critical section protected by mutex1" << std::endl;
    std::cout << "Critical section protected by mutex2" << std::endl;
}

int main() {
   
    std::thread t1(criticalSectionfun);
    std::thread t2(criticalSectionfun);
   
    
    t1.join();
    t2.join();
    
    return 0;
}
