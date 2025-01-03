# include <iostream>
using namespace std;

void printNumbers(int a, int b){
    for (int i = a; i<=b; i++){
        cout<<i<<' ';
    }
    cout<<"\n";
}

int sumOfnumbers(int a, int b){
    return a+b;
}

int main(){
    printNumbers(10, 20);
    cout<<sumOfnumbers(5, 10);
    return 0;
}