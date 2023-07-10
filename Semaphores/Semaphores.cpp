#include "Semaphores.h"


void Semaphores::criticalSectionfun() {
    sem.acquire(); // Acquire the semaphore

    // Critical section code
    std::cout << "Critical section protected by semaphore" << std::endl;

    sem.release(); // Release the semaphore
}

int main() {
    std::thread t1(criticalSectionfun);
    std::thread t2(criticalSectionfun);
    std::thread t3(criticalSectionfun);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}