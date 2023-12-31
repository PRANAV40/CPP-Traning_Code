
#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
const int increment = 100;
using namespace std;

class Stash
{
    int size;     // Size of each space
    int quantity; // Number of storage spaces
    int next;     // Next empty space
    // Dynamically allocated array of bytes:
    unsigned char *storage;
    void inflate(int increase);

public:
    Stash(int size);
    ~Stash();
    int add(void *element);
    void *fetch(int index);
    int count();
};

Stash::Stash(int sz)
{
    size = sz;
    quantity = 0;
    storage = 0;
    next = 0;
}
int Stash::add(void *element)
{
    if (next >= quantity) // Enough space left?
        inflate(increment);
    // Copy element into storage,
    // starting at next empty space:
    int startBytes = next * size;
    unsigned char *e = (unsigned char *)element;
    for (int i = 0; i < size; i++)
        storage[startBytes + i] = e[i];
    next++;
    return (next - 1); // Index number
}
void *Stash::fetch(int index)
{
    require(0 <= index, "Stash::fetch (-)index");
    if (index >= next)
        return 0; // To indicate the end
    // Produce pointer to desired element:
    return &(storage[index * size]);
}
int Stash::count()
{
    return next; // Number of elements in CStash
}
void Stash::inflate(int increase)
{
    require(increase > 0, "Stash::inflate zero or negative increase");
    int newQuantity = quantity + increase;
    int newBytes = newQuantity * size;
    int oldBytes = quantity * size;
    unsigned char *b = new unsigned char[newBytes];
    for (int i = 0; i < oldBytes; i++)
        b[i] = storage[i]; // Copy old to new
    delete[] (storage);    // Old storage
    storage = b;           // Point to new memory
    quantity = newQuantity;
}
Stash::~Stash()
{
    if (storage != 0)
    {
        cout << "freeing storage" << endl;
        delete[] storage;
    }
}
int main()
{
    Stash intStash(sizeof(int));
    for (int i = 0; i < 100; i++)
        intStash.add(&i);
    for (int j = 0; j < intStash.count(); j++)

        cout << "intStash.fetch(" << j << ") = "
             << *(int *)intStash.fetch(j)
             << endl;
    const int bufsize = 80;
    Stash stringStash(sizeof(char) * bufsize);
    ifstream in("Stash2Test.cpp");
    assure(in, " Stash2Test.cpp");
    string line;
    while (getline(in, line))
        stringStash.add((char *)line.c_str());
    int k = 0;
    char *cp;
    while ((cp = (char *)stringStash.fetch(k++)) != 0)
        cout << "stringStash.fetch(" << k << ") = "
             << cp << endl;
}