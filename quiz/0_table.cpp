#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Print Any Table \n";
    cout<<"Enter the Table number\n";
    cin>>number;
    cout<<"========================"<<endl;
    for(int i=1; i<=10;i++){
        cout<<number<<"X"<<i<<"="<<i*number<<endl;
    }
    return 0;
}