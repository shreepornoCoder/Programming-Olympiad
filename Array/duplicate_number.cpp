#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t; cin>>t;

    for (int i = 0; i<t; i++){
        int n; cin>>n; 
        vector <int> numbers(n);
        vector <int> duplicate_numbers;

        for (int j = 0; j<n; j++){
            cin>>numbers[j];
        }

        sort(numbers.begin(), numbers.end());

        for (int j = 0; j<n-1; j++){
            if (numbers[j] == numbers[j+1]){
                duplicate_numbers.push_back(numbers[j]);

            }
        }
        cout<<"Duplicate Numbers: ";
        for (int j = 0; j<duplicate_numbers.size(); j++){
            cout<<duplicate_numbers[j]<<" ";
        }
    }

    return 0;
}