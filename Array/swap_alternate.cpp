#include <bits/stdc++.h>
using namespace std;

int main(){
    int size; cin>>size;
    int arr[size];

    for (int i = 0; i<size; i++){
        cin>>arr[i];
    }

    if (size % 2 == 0){
        for (int i = 0; i<size-1; i+=2){
            swap(arr[i], arr[i+1]);
        }
    }
    else{
        for (int i = 0; i<size-2; i+=2){
            swap(arr[i], arr[i+1]);
        }   
    }

    for (int i = 0; i<size; i++){
        cout<<arr[i];
    }

    return 0;
}