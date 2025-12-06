#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an integer from 1 to 4: ";
    cin>>a;
    switch(a){
        case 1: cout<<"You Choose 1 ";
        break;
        case 2: cout<<"You Choose 2";
        break;
        case 3: cout<<"You Choose 3";
        break;
        case 4: cout<<"You Choose 4";
        break;
        default: cout<<"Invalid integer entered.";
    }
}