#include<iostream>
using namespace std;

struct CDAccountV1
{
    double balance;
    double interestRate;
    int term;
};
void swapStruct(CDAccountV1& v1, CDAccountV1& v2);

int main() {
    struct CDAccountV1 v1 = {10.0, 0.01, 60};
    struct CDAccountV1 v2 = {50.0, 0.02, 30};

    swapStruct(v1, v2);
    cout << "balance: " << v1.balance
         << " interest: " << v1.interestRate
         << " terms: " << v1.term << endl;

    cout << "balance: " << v2.balance
         << " interest: " << v2.interestRate
         << " terms: " << v2.term << endl;
    return 0;
}
void swapStruct(CDAccountV1& v1, CDAccountV1& v2)
{
    struct CDAccountV1 temp;
    temp.balance = v1.balance;
    temp.interestRate = v1.interestRate;
    temp.term = v1.term;

    v1.balance = v2.balance;
    v1.interestRate = v2.interestRate;
    v1.term = v2.term;

    v2.balance = temp.balance;
    v2.interestRate = temp.interestRate;
    v2.term = temp.term;

}

