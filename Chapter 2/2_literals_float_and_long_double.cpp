#include<iostream>
using namespace std;
int main(){
    float d = 34.4;
    long double e = 34.4;
    cout<<"The value of float d is "<<d<<endl<<"The value of long double e is "<<e<<endl;

    cout<<sizeof(34.4)<<endl;
    cout<<sizeof(34.4F)<<endl;
}