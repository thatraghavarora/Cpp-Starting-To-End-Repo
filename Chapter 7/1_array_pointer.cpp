#include<iostream>
using namespace std;
int main(){
    int scienceMarks[] = {44,45,46,48};
    int *ptr = scienceMarks;       
    cout<<"The science marks are:"<<endl;
    cout << *ptr << endl;       
    cout << *ptr + 1 << endl;   
    cout << *ptr + 2 << endl;    
    cout << *ptr + 3 << endl;    

cout << ptr << endl;        // address of element 0
cout << ptr + 1 << endl;    // address of element 1
cout << ptr + 2 << endl;    // address of element 2
cout << ptr + 3 << endl;    // address of element 3

    
    
    return 0;
}