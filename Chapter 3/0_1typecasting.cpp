#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int myinteger = 10;
    float myfloat = 10.00;

    cout << fixed << setprecision(2);

    cout << "The Integer Value is " << myinteger << endl;
    cout << "The Integer as Float is " << static_cast<float>(myinteger) << endl;

    cout << "The Float Value is " << myfloat << endl;
    cout << "The Float as Integer is " << static_cast<int>(myfloat) << endl;
}
