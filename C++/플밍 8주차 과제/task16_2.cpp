#include <iostream>
using namespace std;

class Vector2D
{
    public:
        Vector2D();
        Vector2D(int X, int Y);
        void output() const;
        int getX() const;
        int getY() const;
    private:
        int x;
        int y;
};
Vector2D::Vector2D()
{
    x=0;
    y=0;
}
Vector2D::Vector2D(int X, int Y)
{
    x=X;
    y=Y;
}
void Vector2D::output() const 
{
    cout << "(" << x << "," << y << ")" << endl;
}
const Vector2D operator +(const Vector2D& point1, const Vector2D& point2)
{
    return Vector2D(point1.getX()+point2.getX(), point1.getY()+point2.getY());
}
const Vector2D operator -(const Vector2D& point1, const Vector2D& point2)
{
    return Vector2D(point1.getX()-point2.getX(), point1.getY()-point2.getY());
}
const Vector2D operator -(const Vector2D& point1)
{
    return Vector2D(-point1.getX(), -point1.getY());
}
bool operator ==(const Vector2D& v1, const Vector2D& v2)
{ 
    return ((v1.getX()==v2.getX())&&(v1.getY()==v2.getY()));
}

int main() 
{
    Vector2D v0, v1(2,2), v2(3,3), v3;
    v3 = v1+v2;
    v3.output();

    v3 = v1-v2;
    v3.output();
    if(v3 == v0) {
        cout << "Operator - works!" << endl;
    }

    return 0;
}
int Vector2D::getX() const{
    return x;
}
int Vector2D::getY() const{
    return y;
}
