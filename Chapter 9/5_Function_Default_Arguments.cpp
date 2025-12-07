#include <iostream>
using namespace std;

void show(int x = 10) {
    cout << "Value = " << x;
}

int main() {
    show();     // uses default
    show(20);   // overrides default
    return 0;
}
