//*************Remove Duplicates in-place from Sorted Array****************

#include<bits/stdc++.h>
using namespace std;

//This is using Brute force apporach
// int removeDuplicate(int arr[],int n){
//     set<int>st;
//     for(int i=0;i<n;i++){
//         st.insert(arr[i]);
//     }
//     int k = st.size();
//     int j=0;
//     for (int x: st){
//         arr[j++] = x;
//     }
//     return k;
// }
int removeDuplicate(int arr[], int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = removeDuplicate(arr,n);
    cout<<"The array after removing duplicate elements is ";
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}