#include <iostream>
using namespace std;

int main() {
    // Old Way 
    int mathsMarks[4];      // had to define array size inside the square brackets
    mathsMarks[0] = 56;
    mathsMarks[1] = 54;
    mathsMarks[2] = 58;
    mathsMarks[3] = 57;

    cout<<"The maths marks are:"<<endl;
    cout<<mathsMarks[0]<<endl;
    cout<<mathsMarks[1]<<endl;
    cout<<mathsMarks[2]<<endl;
    cout<<mathsMarks[3]<<endl;
    
    // Modern Way
    int scienceMarks[] = {44, 45, 46 , 48};

    cout<<"The science marks are:"<<endl;
    cout<<scienceMarks[0]<<endl;
    cout<<scienceMarks[1]<<endl;
    scienceMarks[1]=49;
    cout<<scienceMarks[1]<<endl;

    return 0;
}