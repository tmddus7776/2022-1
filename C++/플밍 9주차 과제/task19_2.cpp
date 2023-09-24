#include <iostream>
using namespace std;

int* allocArray(int arrsize);
void printArray(int* arr);
void freeArray(int* arr);

int main() 
{
    int* arr;
    int size;

    cout << "Enter the array size";
    cin >> size;
    arr = allocArray(size);

    for (int i=0; i<size; i++) {
        cout << "Put an array element: ";
        cin >> arr[i];
    }

    printArray(arr);
    freeArray(arr);

    return 0;
}
int* allocArray(int arrsize) {
    int *temp = new int[arrsize];
    return temp;
}
void printArray(int* arr) {
    for (int i=0; i<(sizeof(*arr)-1); i++) {
        cout << *(arr+i) << " ";
    }
}
void freeArray(int* arr) {
    delete [] arr;
}