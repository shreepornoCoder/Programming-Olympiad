#include <bits/stdc++.h>
using namespace std;

void printVec(vector <pair<int, int>> &v){
    for (int i = 0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}

int main(){
    vector <pair<int, int>> v = {{1, 2}, {3, 4}};
    printVec(v);

    return 0;
}