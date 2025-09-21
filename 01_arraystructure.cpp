#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> arr = {10,20,30,40,50};
    int n = arr.size();
    cout<<"Array before insertion \n";
    for(int i = 0;i<n;i++){  
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Add an element into array\n";
    arr.push_back(60);
    n++;
    
     for(int i = 0;i<n;i++){  
        cout<<arr[i]<<" ";
    }  
    cout<<"\n";
    cout<<"Array before Deletion \n";
    arr.erase(arr.begin());

    for(int i = 0;i<n;i++){  
        cout<<arr[i]<<" ";
    }  
    return 0;
}
