#include <iostream>
using namespace std;

int main() {
    int number , i=1;
    cout<<"Enter The Number"<<endl;
    cin>>number;
    cout<<"========================"<<endl;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=number);
    cout<<"========================"<<endl;
    return 0;
}