#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num; cin>>num;

    vector <int> res;

    while (num > 0){
        res.push_back((num%2));
        num /= 2; 
       
    }
    for (int i = res.size()-1; i>=0; i--){
        cout<<res[i];
    }

    return 0;
}