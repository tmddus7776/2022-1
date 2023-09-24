#include<iostream>
using namespace std;
class Vector2D{
    public:
        Vector2D(); 
        Vector2D(int x_val, int y_val); 
        void output() const;
        int get_x() const; 
        int get_y() const;
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
int Vector2D::get_x() const{
    return x;
}
int Vector2D::get_y() const{
    return y;
}
const Vector2D operator +(const Vector2D& v1, const Vector2D& v2){ 
    return Vector2D(v1.get_x()+v2.get_x(), v1.get_y()+v2.get_y());
}
const Vector2D operator -(const Vector2D& v1, const Vector2D& v2){ 
    return Vector2D(v1.get_x()-v2.get_x(), v1.get_y()-v2.get_y());
} 
const Vector2D operator -(const Vector2D& v1){ 
    return Vector2D(-v1.get_x(), -v1.get_y());
}
bool operator ==(const Vector2D& v1, const Vector2D& v2){ 
    return ((v1.get_x()==v2.get_x())&&(v1.get_y()==
    v2.get_y()));
}
int main(){
    Vector2D v0, v1(2,2), v2(3,3), v3;

    v3=v1+v2;
    v3.output();

    v3=v2-v2;
    v3.output();

    if(v3==v0){
        cout<<"Operator - works!"<<endl;
    }
}