#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector <int> arr(n);
    vector <int> res(n);

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    res[0] = arr[0];
    cout<<res[0];

    for (int i=1; i<n; i++){
        res[i] = res[i-1] + arr[i];
        cout<<res[i]<<"\n";
    }
    for (int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }

    return 0;
}