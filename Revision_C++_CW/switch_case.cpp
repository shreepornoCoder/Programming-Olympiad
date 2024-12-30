# include <iostream>
using namespace std;

int main(){
    int option;
    cout<<"Enter Option from 1-3 ";
    cin>>option;

    switch(option){
        case 1:
            cout<<"Python";
            break;
        case 2:
            cout<<"Java-Script";
            break;
        case 3:
            cout<<"C++";
            break;
        default:
            cout<<"Invalid Option";
    }

    return 0;
}