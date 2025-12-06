#include <iostream>
using namespace std;

int main() {
    int a = 4 , *b=&a , **c = &b;
    cout<<"The Value of A is "<<a<<endl;
    cout<<"The Address  of A is "<<&a<<endl;
    cout<<"========================================\n";
    cout<<"The Value of B is "<<*b<<endl;
    cout<<"The Address of B is "<<b<<endl;
    cout<<"========================================\n";
    cout<<"The Value of C is "<<**c<<endl;
    cout<<"The Address of C is "<<c<<endl;
    cout<<"========================================\n";
    return 0;
}