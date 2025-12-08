#include <iostream>
using namespace std;

class Student {
private:
    int age;       // private data
    float marks;   // private data

public:
    // function to set values
    void setData(int a, float m) {
        age = a;
        marks = m;
    }

    // function to show values
    void display() {
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;          // object
    s.setData(20, 85.5);
    s.display();

    return 0;
}

