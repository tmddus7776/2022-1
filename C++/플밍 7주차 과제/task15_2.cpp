#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class HotDogStand 
{
    public: 
        HotDogStand();
        HotDogStand(string storename);
        void justSold(int numHotdog);
        string getName();
        int getNumSold();
        static int getTotalNumSold();

    private:
        string name;
        int saleHotdog;
        static int sumHotdog;
};

int HotDogStand::sumHotdog = 0;

int main() 
{
    HotDogStand h1("SSU-1"), h2("SSU-2"), h3("CAU-3");
    h1.justSold(20);
    h2.justSold(50);
    h3.justSold(1);

    cout << h1.getName() << " has sold" << h1.getNumSold() << "hotdogs." << endl;
    cout << h2.getName() << " has sold" << h2.getNumSold() << "hotdogs." << endl;
    cout << h3.getName() << " has sold" << h3.getNumSold() << "hotdogs." << endl;

    cout << "Total sales are: " << HotDogStand::getTotalNumSold() << endl;

    return 0;
}

//생성자
HotDogStand::HotDogStand() {}
HotDogStand::HotDogStand(string storename) {
    name = storename;
    saleHotdog=0;
}
//대체: HotDogStand::HotDogStand(string storename) : name(storename) saleHotdog(0) {}

void HotDogStand::justSold(int numHotdog) {
    saleHotdog += numHotdog; //매장 내 핫도그 판매량 증가
    sumHotdog += numHotdog; //전체 매장 핫도그 판매량 증가
}

string HotDogStand::getName() {
    return name;
}
int HotDogStand::getNumSold() {
    return saleHotdog;
}
int HotDogStand::getTotalNumSold() {
    return sumHotdog;
}
