#include <bits/stdc++.h>
using namespace std;

int main(){
    pair <int, string> p;

    p = make_pair(1, "Shree");

    cout<<p.first<<" "<<p.second<<"\n";

    // update values
    p.first = 24;
    p.second = "Tirtho";
    
    cout<<p.first<<" "<<p.second<<"\n";

    return 0;
}