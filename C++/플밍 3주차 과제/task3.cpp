#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
using std::ifstream;
using std::ofstream;
using std::endl;

int main() {
    ifstream inStream;
    ofstream outStream;
    inStream.open("task3.txt");

    char text[20];
    while (inStream >> text) {
        if(strcmp(text, "hate") == 0) {
            strcpy(text, "love");
        }
        
        cout << text << " ";
        
    }
    inStream.close();

    return 0;

}