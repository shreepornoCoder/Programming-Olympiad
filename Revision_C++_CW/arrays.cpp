#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int sum = 0;
    for (int i = 0; i<n; i++){
        sum += arr[i];
    }
    cout<<sum<<" \n";

    sort(arr, arr + n);

    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    // Length
    cout<<"\n"<<"Length: "<<sizeof(arr)/sizeof(int);

    return 0;
}