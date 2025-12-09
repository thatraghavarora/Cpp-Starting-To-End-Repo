#include <iostream>
using namespace std;
class Toilet{
        private:
        void privatetoilet(){
            cout<<"Private Toilet\n";
        }
        public:
        friend void plumber(Toilet pt);
    };
    void plumber(Toilet pt){
       cout<<"Plumber Got Special Access\n ";
       pt.privatetoilet();
    };
int main() {
   Toilet pt;
   plumber(pt);
    return 0;
}