#include <iostream>
using namespace std;

void fun(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 5;
    fun(&a);
    cout << "After function (address): " << a << endl;
    return 0;
}
