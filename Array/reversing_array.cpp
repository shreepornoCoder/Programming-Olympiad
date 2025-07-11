#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    // int sum = 0;
    int new_arr[size];
    int j = size-1;

    for (int i = 0; i<size; i++){
        new_arr[i] = arr[j];
        j--;
    }
    for (int i = 0; i<size; i++){
        cout<<new_arr[i]<<" ";   
    }
}

int main(){
    int n; cin>>n; 

    int arr[n];

    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    reverseArray(arr, n);

    return 0;
}