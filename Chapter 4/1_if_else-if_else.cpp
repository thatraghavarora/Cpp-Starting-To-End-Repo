#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter The Age ";
    cin>>age;
    if(age<18){
        cout<<"You Are Less Than 18";
    }
    else if (age<=60){
        cout<<"You Can Drive The Car";
    }
    else{
        cout<<"You Are Can't Drive Your Age is greater than 60";
    }
    return 0;
}