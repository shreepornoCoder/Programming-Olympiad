#include <iostream>
using namespace std;

int main(){
    int n, i; cin>>n>>i;

    // Using Left-Shift
    if ((n&(1<<i)) != 0) cout<<"Set"<<'\n';
    else cout<<"Using Left Shift: "<<"No Set"<<'\n';

    // Using Right-Shift
    if ((n>>i)&1 != 0) cout<<"Set"<<'\n';
    else cout<<"Using Left Shift: "<<"No Set"<<'\n';

    return 0;
}