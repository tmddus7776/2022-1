#include<iostream>
using namespace std;
class Vector2D{  
    public:
        Vector2D(); 
        Vector2D(int x_val, int y_val); 
        friend const Vector2D operator +(const Vector2D& v1, const Vector2D& v2); 
        friend const Vector2D operator -(const Vector2D& v1, const Vector2D& v2); 
        friend const Vector2D operator -(const Vector2D& v1); 
        friend bool operator ==(const Vector2D& v1, const Vector2D& v2); 
        friend const Vector2D operator *(const int s, const Vector2D& v1); 
        const int operator *(const Vector2D& v2); 
        friend ostream& operator <<(ostream& outputStream, const Vector2D& v1); 
    private:
        int x;  //정수형의 x좌표
        int y;  //정수형의 y좌표
};
Vector2D::Vector2D(){
    x=0;
    y=0;
}
Vector2D::Vector2D(int x_val, int y_val){
    x=x_val;
    y=y_val;
}
const Vector2D operator +(const Vector2D& v1, const Vector2D& v2){ 
    return Vector2D(v1.x+v2.x, v1.y+v2.y);
}
const Vector2D operator -(const Vector2D& v1, const Vector2D& v2){ 
    return Vector2D(v1.x-v2.x, v1.y-v2.y);
} 
const Vector2D operator -(const Vector2D& v1){ 
    return Vector2D(-v1.x, -v1.y);
}
bool operator ==(const Vector2D& v1, const Vector2D& v2){ 
    return ((v1.x==v2.x)&&(v1.y==v2.y));
}
const Vector2D operator *(const int s, const Vector2D& v1){ 
    return Vector2D(v1.x*s, v1.x*s);
}
const int Vector2D::operator *(const Vector2D& v2){ 
    return x*v2.x+y*v2.y;
}
ostream& operator <<(ostream& outputStream, const Vector2D& v1){ 
    outputStream<<"("<<v1.x<<","<<v1.y<<")";
    return outputStream;
}
int main(){
    Vector2D v0, v1(2,2), v2(3,3), v3;
    cout<<v1<<endl;
    cout<<v1+v2<<endl;
}