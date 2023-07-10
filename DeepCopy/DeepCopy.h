#pragma once
#include <iostream>
using namespace std;

class DeepCopy
    {
        int a;
        int b;
        int* p;

    public:
       DeepCopy()
       {
            p = new int;
        }
        void setdata(int x, int y, int z);
        void showdata();
        DeepCopy(DeepCopy& sample) {
            a = sample.a;
            b = sample.b;
            p = new int;
            *p = *(sample.p);
        }
};