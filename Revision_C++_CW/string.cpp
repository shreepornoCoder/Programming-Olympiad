# include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main(){
    string name = "Shreeporno";

    name[1] = 'S';
    cout<<name<<"\n";

    sort(name.begin(), name.end()); 
    cout<<name<<"\n";

    reverse(name.begin(), name.end()); 
    cout<<name<<"\n";
 
    return 0;
}