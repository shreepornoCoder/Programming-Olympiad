#include <iostream>
using namespace std;

int main(){
    int age;
    cin >> age;

    string result = (age>=18) ? "Eligible" : "Not Eligible";
    cout<<result;
}