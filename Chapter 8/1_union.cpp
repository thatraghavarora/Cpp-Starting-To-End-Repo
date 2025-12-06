#include <iostream>
using namespace std;

union currency{
    int cash;
    char label;
    float dolla;
};

int main() {
    currency usa;

    usa.cash = 8000;
    cout << "Cash: " << usa.cash << endl;
    cout << &usa.cash<<endl;
    usa.label = 'A';
    cout << "Label: " << usa.label << endl;
    cout << &usa.label<<endl;
    usa.dolla = 60.0;
    cout << "Dollar: " << usa.dolla << endl;
    cout << &usa.dolla<<endl;

    return 0;
}
