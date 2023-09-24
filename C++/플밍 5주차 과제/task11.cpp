#include<iostream>
#include<cstring>
using namespace std;

int add(int a, int b);
double add(double a, double b);
string add(string a, string b);

int main() {
    int i1 = 10, i2 = 30;
    double d1 = 0.5, d2 = 3.5;
    string s1 = "Hello", s2 = "World";

    cout << add(i1,i2) << ", ";
    cout << add(d1,d2) << ", ";
    cout << add(s1,s2) << endl;

    return 0;
}
int add(int a, int b) {
    return a+b;
}
double add(double a, double b) {
    return a+b;
}
string add(string a, string b) {
    return a+b;
}
