#include<iostream>
using namespace std;

void fillArray(int a[], int size);
void printArray(int a[], int size);

int main() {
    int arr[5];
    fillArray(arr, 5);
    printArray(arr, 5);

    return 0;
}

void fillArray(int a[], int size) {
    cout << "Put array elements: ";
    for (int i=0; i<size; i++) {
        cin >> a[i];
    }
}

void printArray(int a[], int size) {
    cout << "Array elements are ";
    for (int i=0; i<size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}