//Sean Heidari, Jacob Gurley, Mark Fastner
//Class(CECS 282-06)
//Due Date 04/8/2021
//Demo at 8:35
#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
int main() {
  
  Point p1(0, 0);
  Point p2(2,3);
  Line l1(2,3,4,9);
  cout << "distnace between two points in a line " << p1.distance(p2) << endl;//distance between 2 points in a line 

  cout << "point 1: " << p1.getX() << "," << p1.getY() << endl;
  cout << "point 2: " << p2.getX() << "," << p2.getY() << endl;
  if(p1 == p2){
    cout << "points are equal" << endl;
  }
  else{
    cout << "points are not equal" << endl;
  }

  cout << "length of line: " << l1.length() << endl;
  cout << "slope of line: " << l1.slope() << endl;

}