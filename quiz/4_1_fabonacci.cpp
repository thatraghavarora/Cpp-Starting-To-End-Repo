#include <iostream>
using namespace std;

int main() {
    int number , first = 0, second = 1, result , i=1;
    cout<<"Enter the N Number"<<endl;
    cin>>number;
    cout<<"======================="<<endl;
    
    while(i<number){
        result = first + second;
        cout<<result<<endl;
        first = second;
        second = result;
        i++;
    }
    return 0;
}