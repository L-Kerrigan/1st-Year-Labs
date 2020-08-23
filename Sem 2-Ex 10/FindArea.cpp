/* Exercise 10, Question 2 - C++
This program finds the area of different shapes.
User must specify the required parameters. However the following default parameters for each area function should also be provided:
- Triangle: height = 1.0, base = 2.3
- Square: side = 10
- Rectangle: length = 20;
- Rhombus: diagonal 1 = 10.2, diagonal 2 = 3.8
- Circle: radius = 3.6
- Trapezoid: base = 8
*/

#include <iostream>
using namespace std;
#include <math.h> //Used to define PI

void areaTriangle(float base, float height){
  double area = (base * height)/2; //Calculates area of a triangle
  cout<<"The area of the triangle is: " <<area<< endl;
}

void areaSquare(float side){
  double area = ((side)*4); //Calculates area of a square
  cout<<"The area of the square is: " <<area<< endl;
}

void areaRectangle(float side1, float side2){
  double area = (2*side1)+(2*side2); //Calculates area of a rectangle
  cout<<"The area of the rectangle is: " <<area<< endl;
}

void areaRhombus(float diagonal1, float diagonal2){
  double area = (diagonal1*diagonal2)/2; //Calculates area of a rhombus
  cout<<"The area of the rhombus is: " <<area<< endl;
}

void areaCircle(float radius){
  double area = (radius*radius)*M_PI; //Calculates area of a circle
  cout<<"The area of the circle is: " <<area<< endl;
}

void areaTrapezoid(float base1, float base2, float height){
  double area = ((base1+base2)/2)*height; //Calculates area of a trapezoid
  cout<<"The area of the trapezoid is: " <<area<< endl;
}


int main(){
  int ans; //To hold the number given by the user to choose which shape's area to calculate
  float v1, v2, v3; //Three variables to hold any required measurements for each function
  cout<<"What do you want to calculate the area of? 1. triangle, 2. square, 3. rectangle, 4. rhombus, 5. circle, 6. trapezoid."<< endl;
  cin>>ans;

  switch(ans){ //Switch statement decides which function is to be called based on user's response
    case 1:
    cout<<"Enter the base and height of the triangle."<< endl;
    cin>> v1>> v2; //Taking in the base and height
    areaTriangle(v1, v2);
    break;

    case 2:
    cout<<"Enter the side length of the square."<< endl;
    cin>> v1; //Taking in the length of the sides of the square
    areaSquare(v1);
    break;

    case 3:
    cout<<"Enter the 2 lengths of the sides of the rectangle."<< endl;
    cin>> v1>> v2; //Taking in the lengths of the sides
    areaRectangle(v1, v2);
    break;

    case 4:
    cout<<"Enter the 2 diagonal lengths of the rhombus."<< endl;
    cin>> v1>> v2; //Taking in the 2 diagonal lengths
    areaRhombus(v1, v2);
    break;

    case 5:
    cout<<"Enter the radius of the circle."<< endl;
    cin>> v1; //Taking in the radius
    areaCircle(v1);
    break;

    case 6:
    cout<<"Enter the 2 base lengths and the height of the trapezoid."<< endl;
    cin>> v1>> v2>> v3; //Taking in the base lengths and height
    areaTrapezoid(v1, v2, v3);
    break;
  }
}
