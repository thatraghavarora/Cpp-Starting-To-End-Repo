#include <iostream>
using namespace std;

class CityToilet{
        private:
        void PrivateToilet(){
        cout<<"Private Toilet\n";
        };
        public:
        void PublicToilet(){
        cout<<"Public Toilet\n";
        };
        protected:
        void FamilyToilet(){
        cout<<"Family Toilet\n";
        };
    };

class CommunityMember : public CityToilet {
public:
    void useCommunityToilet() {
        FamilyToilet(); // Allowed (protected used in derived class)
    };
};
int main() {
    CityToilet Jaipur;
    Jaipur.PublicToilet();
    CommunityMember cm;
    cm.useCommunityToilet();
}
    