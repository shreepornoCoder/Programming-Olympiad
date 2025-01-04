# include <iostream>
# include <bits/stdc++.h>
using namespace std;

void output(vector<int> &v){
    v.pop_back();
    for (int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);

    cout<<"Vector Size: "<<v.size()<<"\n";
    output(v);

    cout<<"\n";

    for (int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
}