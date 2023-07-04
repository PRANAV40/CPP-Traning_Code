//*************Find the Largest element in an array*************
#include<bits/stdc++.h>
using namespace std;


// Optimal Solution for Find the Largest element in an array
int findLargestElementArray(int arr[],int n){
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;   
}
int main(){
    int arr1[] = {6,7,8,4,9};
    int n = 5;
    int max = findLargestElementArray(arr1,n);

    cout<<"The largest Elements in array1 "<< max <<endl;

    int arr2[] = {16,17,81,41,91};
    n = 5;
    max = findLargestElementArray(arr2,n);

    cout<<"The largest Elements in array2 "<< max <<endl;
    return 0;
}
//Brute Force Technique
// int SortArray(vector<int>&arr){
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1];
// }
// int main(){
//     vector<int> arr1 = {2,6,8,4,3};
//     vector<int> arr2 = {12,16,18,14,23};

//     cout<<"The largest Elements in array1 "<<SortArray(arr1)<<endl;
//     cout<<"The largest Elements in array1 "<<SortArray(arr2)<<endl;

//     return 0;
// }