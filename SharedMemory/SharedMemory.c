#include<iostream>
#include<stdlib.h>
#include "C:\MinGW\include\unistd.h"
#include<sys/types.h>
#include<string.h>
using namespace std;
int main() {
	void *shared_memory;
	char buff[100];
	int shmid;
	shmid = shmget((key_t) 1122, 1024, 0666 | IPC_create);
	cout<<""
}