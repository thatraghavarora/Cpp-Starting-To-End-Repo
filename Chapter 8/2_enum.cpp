#include <iostream>
using namespace std;

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    TrafficLight signal = RED;

    if(signal == RED)
        cout << "Stop!" << endl;

    return 0;
}
