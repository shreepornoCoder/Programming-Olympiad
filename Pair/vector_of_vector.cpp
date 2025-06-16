#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <vector<int>> v;
    int n; cin>>n;
    for (int i = 0; i<n; i++){
        int size; cin>>size;
        vector <int> temp;
        for (int j = 0; j<size; j++){
            int x; cin>>x; 
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout<<v[0][1];

    return 0;
}