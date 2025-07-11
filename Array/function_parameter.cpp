#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int printMin(int num[6], int size){
    int min = INT_MAX;

    // cout<<sizeof(num)/sizeof(num[0]); Wrong approach. Because arrays as parameter are considered as pointer
    
    for (int i = 0; i<size; i++){
        if (num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int main(){
    int n; cin>>n;
    int arr[100];

    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<printMin(arr, n);
    return 0;
}