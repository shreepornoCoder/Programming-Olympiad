#include <iostream>
using namespace std;

// Swapping Three Numbers: 
//          a
//         / \?
//        c - b

int main(){
    int a = 5, b = 6, c = 8;
    cout<<a<<" "<<b<<" "<<c<<"\n";

    int temp1 = a, temp2 = b, temp3 = c;

    a = c; b = temp1; c = temp2;

    cout<<a<<" "<<b<<" "<<c<<"\n";

    return 0;
}