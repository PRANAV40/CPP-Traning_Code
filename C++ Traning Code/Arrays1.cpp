#include <iostream>
using namespace std;

// Sum of every subsequence

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        
        for (int j = i; j < n; j++)
        {
            count += arr[j];
            cout << count<<endl;
        }
    }

    return 0;
}
// Problem is  find the Maximum value till i
//  int main(){
//      int mx = -1999999;
//      int n;
//      cin>>n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         mx = max(mx,arr[i]);
//         cout<<mx<<endl;
//     }
//     return 0;
// }