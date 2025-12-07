#include <iostream>
#include <functional>
using namespace std;
void swapping(int a, int b){
        int temp;
        temp = a;
        a = b;
        b = temp;

        cout<<a;
        cout<<b;
    }
int main() {
    int a = 10, b =20;
    swapping(a,b);
    
}