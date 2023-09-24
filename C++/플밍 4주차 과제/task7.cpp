#include<iostream>
using namespace std;

int main() {
    int a[4][4] = {10, 20, 30, 40, 5, 4 ,3, 99, 55, 100, 42, 100, 0, 105, 2, 11};
    int largest=1, second_largest=0;
    for (int i =0; i<4; i++) {
        for (int j=0; j<4; j++) {
            if (a[i][j] > largest) {
                largest = a[i][j];
            }
        }
    }
    for (int i =0; i<4; i++) {
        for (int j=0; j<4; j++) {
            if ((a[i][j] > second_largest) && a[i][j] < largest) {
                second_largest = a[i][j]; 
            }
        }
    }
    cout << "The largest number is " << largest << endl 
         << "The Second-largest number is " << second_largest << endl;



    return 0;
}