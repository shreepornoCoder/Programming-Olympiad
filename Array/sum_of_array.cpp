#include <iostream>
using namespace std;

int sumArray(int arr[], int size){
    int sum = 0;

    for (int i = 0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n; cin>>n; 

    int arr[n];

    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Sum of the Array: "<<sumArray(arr, n);

    return 0;
}