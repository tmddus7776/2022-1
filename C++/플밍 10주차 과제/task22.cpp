#include <iostream>
using namespace std;

class A {
    public:
    int a;
    A() {
        cout << "Constructor in class A excuted" << endl;
    }
    ~A() {
        cout << "Destructor in class A excuted" << endl;
    }
};

class B: public A {
    public:
    int b;
    B() {
        cout << "Constructor in class B excuted" << endl;
    }
    ~B() {
        cout << "Destructor in class B excuted" << endl;
    }
};

class C: public B {
    public:
    int c;
    C() {
        cout << "Constructor in class C excuted" << endl;
    }
    ~C() {
        cout << "Destructor in class C excuted" << endl;
    }
};

int main() {
    C* pc = new C;
    delete pc;

    return 0;
}