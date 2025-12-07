#include <iostream>
using namespace std;

// call-by-reference function
void swapping(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Before swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swapping(x, y);   // passed by reference

    cout << "\nAfter swapping (call by reference):" << endl;
    cout << "x = " << x << endl;   // now 20
    cout << "y = " << y << endl;   // now 10

    return 0;
}
