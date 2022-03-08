//Names: Miguel Echeverria, Mark Fastner, Erik Nguyen
//Date: 04/29/2021
//Section:  section 6
//Demo Time: 7:49
#include <iostream>
#include "Point.h"
#include<vector>
#include<iterator>

using namespace std;
int main() 
{
  Point p1(0,0);
  Point p2(1,1);
  Point p3(2,2);

  vector<Point> vec{p1, p2, p3};
  vector<Point>::iterator it;
  for(it = vec.begin(); it != vec.end(); it++)
  {
    it->outs();
  }
  cout << endl;
  
  Point p4(3,3);
  vec.push_back(p4);

  for(it = vec.begin(); it != vec.end(); it++)
  {
    it->outs();
  }
  cout << endl; 

  Point p5(4,4);
  vec.insert(vec.begin(),p5);

  for(it = vec.begin(); it != vec.end(); it++)
  {
    it->outs();
  }
  cout << endl;

  vec.erase(vec.begin());

  for(it = vec.begin(); it != vec.end(); it++)
  {
    it->outs();
  }
}
