#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
    // int rArr[n];
    // for(int i=0;i<=n;i++){
    //     rArr[i]==arr[n-i];
    // }

    for(int i=0; i<n/2; i++){
        swap(arr[i],arr[n-i-1]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

// Using Recursion

void rA(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    rA(i+1, arr, n);
}

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    // reverseArray(arr, n);
    rA(0, arr, n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}