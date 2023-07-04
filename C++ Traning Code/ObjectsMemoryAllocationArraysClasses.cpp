// **************Objects Memory Allocation & using Arrays in Classes***************
#include <iostream>
using namespace std;

class shop
{
    //Declare the variable in by default private
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    //Declaretion the function in Public
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
//Definition of the function
void shop ::setPrice(void)
{
    cout << "Enter ID for your Item no " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter Price for your Item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
//Definition of the function
void shop ::displayPrice(void)
{
    int i;
    for (i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}
//Driver code
int main()
{
    //Create the object with name of customer
    shop customer;
    customer.initCounter();
    customer.setPrice();
    customer.setPrice();
    customer.setPrice();
    customer.displayPrice();
    return 0;
}