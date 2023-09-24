#include <iostream>
using namespace std;

class Figure
{
public:
   virtual void draw() = 0;
   void center() {
      draw();
   }

private:
   int center_x, center_y;
};

class Point
{
public:
    int px, py;
    Point(int x, int y);
    friend ostream& operator <<(ostream& outputStream, const Point& po);

};

class Rectangle : public Figure
{
public:

   virtual void draw(){
      cout << "A rectangle from " << po1 <<" to " << po2<< endl;
   }

    Rectangle(const Point& one, const Point& two);

private:
   Point po1;
    Point po2;
};

class Circle : public Figure
{ 
public:
   virtual void draw(){
      cout << "A circle with the center of "<< po << " and the radius of " << radius <<endl;
   }

    Circle(const Point& po, int r);

private:
   int radius;
    Point po;
};


void draw2figue(Figure& f1, Figure& f2)
{
    cout << "First figure is: ";
    f1.draw();
    cout << "Second figure is: ";
    f2.draw();
}

int main ()
{
    Point p1(0,0), p2(2,2);
    Rectangle r1(p1,p2);
    Circle c1 (p1,2);
    draw2figue(r1, c1);
}


Point::Point(int x, int y) : px(x), py(y)
{}

Circle::Circle(const Point& one, int r) : po(one), radius(r)
{}

Rectangle::Rectangle(const Point& one, const Point& two) : po1(one),po2(two)
{}

ostream& operator <<(ostream& outputStream, const Point& po)
{
    
    outputStream << "("<< po.px <<","<< po.py <<")";

    return outputStream;
}