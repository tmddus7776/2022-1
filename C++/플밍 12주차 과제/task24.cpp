#include <iostream>
using namespace std;


template<typename T>
class Quad
{
public:
    Quad(T firstVal, T secondVal,T thirdVal, T forthVal);
    friend ostream& operator<<(ostream& os, const Quad<T>& q);
private:
    T first; T second; T third; T forth;
};

template<typename T>
Quad<T>::Quad(T firstVal, T secondVal, T thirdVal, T forthVal) : first(firstVal), second(secondVal), third(thirdVal), forth(forthVal)
{}

ostream& operator<<(ostream& os, const Quad<int>& q)
{
    os << "<" << q.first << ", " << q.second << ", " << q.third << ", " << q.forth << ">" << endl;
    return os;
}

ostream& operator<<(ostream& os, const Quad<string>& q)
{
    os << "<" << "\"" << q.first << "\"" << ", " << "\"" << q.second << "\"" << ", " << "\"" << q.third << "\"" << ", " << "\"" << q.forth << "\"" << ">" << endl;
    return os;
}

ostream& operator<<(ostream& os, const Quad<double>& q)
{
    os << "<" << q.first << ", " << q.second << ", " << q.third << ", " << q.forth << ">" << endl;
    return os;
}

int main()
{
    Quad<int> qi(5,6,7,8);
    Quad<string> qs("hello", "C++", "programming", "language");
    Quad<double> qd(1.1, 2.2, 3.3, 4.4);
    cout << "Elements are: " << qi << endl;
    cout << "Elements are: " << qs << endl;
    cout << "Elements are: " << qd << endl;

    return 0;
}