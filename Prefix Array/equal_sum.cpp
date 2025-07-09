#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    
    vector<int> arr(n);

    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for (int i = 0; i<n-1; i++){
        int sum1 = 0; int sum2 = 0;
        for (int j = 0; j<=i; j++){
            sum1 += arr[j];
        }
        for (int k = i+1; k<n; k++){
            sum2 += arr[k];
        }
        if (sum1==sum2){
            cout<<"Yes";
            break;
        }
    }

    return 0;
}