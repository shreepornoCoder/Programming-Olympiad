#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>v, int length, int tar){
    int st = 0; int end = length - 1;

    while (st <= end){
        int mid = st+((end-st)/2);

        if (tar > v[mid]){
            st = mid+1;
        }
        else if (tar < v[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector <int> v = {1, 2, 3, 4, 5, 6, 7};
    int res = binarySearch(v, v.size(), 6);

    cout<<res; 
    return 0;
}