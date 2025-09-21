//Write a program to reverse an array in place.

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr = {10, 20, 30, 40};
    int n = arr.size();

    for(int i = 0;i<n/2;i++){
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}