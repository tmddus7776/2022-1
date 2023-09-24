#include <iostream>
#include <cstdlib> 
#include<cstring>
using namespace std;

class HotDogStand 
{
    public:
        HotDogStand();
        HotDogStand(string n);
        void justSold(int num);
        int getNumSold();
        string getName();
        static int tot_sol;
        static int getTotalNumSold();
        string name;
        int sold=0;
};
int HotDogStand::tot_sol=0;
HotDogStand::HotDogStand(){}
HotDogStand::HotDogStand(string n){
    name=n;
}
void HotDogStand::justSold(int num){
    sold+=num;
    tot_sol+=num;
}
int HotDogStand::getNumSold(){
    return sold;
}
string HotDogStand::getName(){
    return name;
}
int HotDogStand::getTotalNumSold(){
    return tot_sol;
}
int main()
{
    HotDogStand h1("SSU-1"), h2("SSU-2"), h3("CAU-1");
    h1.justSold(20);
    h2.justSold(50);
    h3.justSold(1);

    cout << h1.getName() << " has sold " << h1.getNumSold() << " hotdogs." << endl;
    cout << h2.getName() << " has sold " << h2.getNumSold() << " hotdogs." << endl;
    cout << h3.getName() << " has sold " << h3.getNumSold() << " hotdogs." << endl;

    cout << "Total sales are: " << HotDogStand::getTotalNumSold() << endl;


}