#include <iostream>
using namespace std;

int main(){
    int j = 1245;

    while (j > 0){
        int r = j%10;
        cout<<r;
        j=j/10;
    }

    return 0;
}