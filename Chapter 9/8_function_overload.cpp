#include <iostream>
using namespace std;
void print(int){
        cout<<"You Have Pass Interger \n";
    }
    void print(float){
        cout<<"You Have Pass Float \n";
    }
    void print(double){
        cout<<"You Have Pass double \n";
    }
    void print(long double){
        cout<<"You Have Pass long double\n";
    }
int main() {
    print(3);
    print(3.3f);
    print(3.3);
    print(3.3l);
    return 0;
}