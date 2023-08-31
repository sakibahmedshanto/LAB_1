#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Rectangle
{
private:
   float length,width;
public:
    Rectangle(float _length,float _width):
    length(_length),
    width(_width)
    {

    };
 
    Rectangle():
    length(1.0),
    width(1.0)
    {

    };

    float calculatePerimeter()
    {
        return 2*(length+width);
    }

    float calculateArea(){
        return length*width;
    }
    
    float calculateDiagonal(){
        return sqrt (pow(length,2) + pow(width,2));
    }

    float calculateAngleWithLength(){
    return 45;
    }

    void setDimensions(float newLength,float newWidth){
    length=newLength;
    width=newWidth;
    }

    float getDimensions(){
        return length;
    }

};





int main(void){
 Rectangle rectangle1(2,2);

 cout<<"perimeter "<<rectangle1.calculatePerimeter()<<endl;
 cout<<"area "<<rectangle1.calculateArea()<<endl;
 cout<<"Diagonal "<<rectangle1.calculateDiagonal()<<endl;
 cout<<"angle "<<rectangle1.calculateAngleWithLength()<<" Degree"<<endl;

 


    return 0;
}