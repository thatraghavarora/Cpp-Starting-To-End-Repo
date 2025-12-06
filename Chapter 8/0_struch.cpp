#include <iostream>
#include <cstring>
using namespace std;
struct students{
    int roll;
    char name[50];
};
int main() {
    struct students student[100];
    student[0].roll = 1;
    strcpy(student[0].name, "Raghav Arora");
    cout<<student[0].roll<<endl;
    cout<<student[0].name<<endl;

    return 0;
}