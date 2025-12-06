#include <iostream>
using namespace std;
int variable_a = 15;  // Global Variable
void check(){
    cout<<variable_a<<endl;
}
int main(){
    int variable_a = 10; // Local variable 
    cout<<variable_a<<endl;
    check();
}
