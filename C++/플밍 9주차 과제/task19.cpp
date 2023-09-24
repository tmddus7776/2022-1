#include <iostream>
using namespace std;

int* allocArray(int size);
void printArray(int arr[]);
void freeArray(int arr[]);

int* allocArray(int size)
{
    return new int[size];
}

void printArray(int arr[])
{
    cout << "Array elements are: ";
    for (int i = 0; i < (sizeof(*arr) - 1); i++)
    {
        cout << *(arr + i) << " ";
    }
}

void freeArray(int arr[])
{
    delete arr;
}

int main()
{
    int* arr;
    int size;

    cout << "Enter the array size: ";
    cin >> size;
    arr = allocArray (size);

    for (int i = 0; i < size; i++)
    {
        cout << "put an array element: ";
        cin >> arr[i];
    }

    printArray(arr);
    freeArray(arr);
    return 0;
}