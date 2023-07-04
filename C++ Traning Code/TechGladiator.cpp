#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

class TechGladiator
{
public:
    int *decimalSequence(int n)
    {
        int size = pow(2, n);
        int *result = new int[size];

        result[0] = 0;
        for (int i = 1; i < size; i++)
        {
            result[i] = result[i - 1] ^ (i & -i);
        }
        return result;
    }
    void binarySequence(int n)
    {
        for (int i = 0; i < (1 << n); i++)
        {
            int val = (i ^ (i >> 1));
            bitset<32> binary(val);
            string binaryStr = binary.to_string().substr(32 - n);
            cout << binaryStr << ",";
        }
    }
};

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    TechGladiator obj_TechGladiator;
    int *result = obj_TechGladiator.decimalSequence(n);

    cout << "DECIMAL - [";
    for (int i = 0; i < pow(2, n); i++)
    {
        cout << result[i] << ",";
    }
    cout << "], BINARY - [";
    obj_TechGladiator.binarySequence(n);
    cout << "].";
    delete[] result;
    return 0;
}
