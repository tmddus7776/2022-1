#include<iostream>
using namespace std;

void sort_three(int&, int&, int&);

int main() {
    int i1=100, i2=90, i3=500;
    sort_three(i1, i2, i3);
    cout << "Three numbers are: "
         << i1 << ", " << i2 << ", " << i3 << endl;

    return 0;
}

void sort_three(int &a, int &b, int &c) {
    int cnt=0;
    if (*&a>*&b && *&a>*&c) {
        if (*&b>*&c) {
            *&a = *&a;
            *&b = *&b;
            *&c = *&c;
        }
        else if(*&b<*&c){
            cnt = *&b;
            *&a = *&a;
            *&b = *&c;
            *&c = cnt;
        }
    }
    else if (*&a<*&b && *&b>*&c) {
        if(*&a>*&c) {
            cnt = *&a;
            *&a = *&b;
            *&b = cnt;
            *&c = *&c;
        }
        else if(*&a<*&c){
            cnt = *&a;
            *&a = *&b;
            *&b = *&c;
            *&c = cnt;
        }
    } 
    else if (*&c>*&a && *&c>*&b) {
        if(*&a>*&b) {
            cnt = *&a;
            *&a = *&c;
            *&c = *&b;
            *&b = cnt;
        }
        else if(*&b>*&a) {
            cnt = *&a;
            *&a = *&c;
            *&b = *&b;
            *&c = cnt;
        }
    }
}