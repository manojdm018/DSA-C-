//Write a program to calculate the time complexity of a simple loop (for (int i=0; i<n; i++)).

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();

    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}