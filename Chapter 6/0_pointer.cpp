#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *b = &a;

    cout<<"The Value of A is "<<a<<endl;
    cout<<"The Address  of A is "<<&a<<endl;
    cout<<"========================================\n";
    cout<<"The Value of B is "<<*b<<endl;
    cout<<"The Address of B is "<<b<<endl;
    cout<<"========================================\n";
    cout<<"But The Real Address B is "<<&b<<endl;


    return 0;
}