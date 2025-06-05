#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 6;
    cout<<a<<" "<<b<<"\n";

    a = a^b;
    b = a^b;
    a = a^b;

    cout<<a<<" "<<b;

    return 0;
}