#include<iostream>
using namespace std;
class Vector2D{  
    public:
        Vector2D(); 
        Vector2D(int x_val, int y_val); 
        void output() const; 
        friend const Vector2D operator +(const Vector2D& v1, const Vector2D& v2); 
        friend const Vector2D operator -(const Vector2D& v1, const Vector2D& v2); 
        friend const Vector2D operator -(const Vector2D& v1); 
        friend bool operator ==(const Vector2D& v1, const Vector2D& v2); 
        friend const Vector2D operator *(const int s, const Vector2D& v1); 
        const int operator *(const Vector2D& v2); 
    private:
        int x;  
        int y;  
};
Vector2D::Vector2D(){
    x=0;
    y=0;
}
Vector2D::Vector2D(int x_val, int y_val){
    x=x_val;
    y=y_val;
}
void Vector2D::output() const{
    cout<<"("<<x<<","<<y<<")"<<endl;
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
int main(){
    Vector2D v0, v1(2,2), v2(3,3), v3;
    int k=2;

    v3=k*v1;
    v3.output();
    cout<<v1*v2<<endl;
}  