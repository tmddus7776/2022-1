#include<iostream>
using namespace std;

int iAdd(int, int);
int iSub(int, int);
int iMul(int, int);
float iDiv(int, int);

int main() {
    int a=20, b=10;
    cout << "Add: " << iAdd(a,b) << endl;
    cout << "Add: " << iSub(a,b) << endl;
    cout << "Add: " << iMul(a,b) << endl;
    cout << "Add: " << iDiv(a,b) << endl;

    return 0;
}

int iAdd(int a, int b) {
    return a+b;
}

int iSub(int a, int b) {
    return a-b;
}

int iMul(int a, int b) {
    return a*b;
}

float iDiv(int a, int b) {
    int Q, R;
    Q = a/b;
    R = a%b;
    float result = Q+(R*0.1);
    return result;
}