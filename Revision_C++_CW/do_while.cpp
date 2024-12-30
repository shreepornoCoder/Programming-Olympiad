#include <iostream>
using namespace std;

int main(){
    int j = 0;

    do{
        int r = j%10;
        cout<<r;
        j=j/10;
    }
    while (j > 0);

    return 0;
}