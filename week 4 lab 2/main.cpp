// Group: Mark Fastner, Deva Ngyuyen, Ashur Motlagh, Abraham Ungos
// Week 4 Lab 2
// Time Demoed: 7:577 PM
#include <iostream>
#include <algorithm>
using namespace std;

int sort6(int &a2, int &b2, int &c2, int &d2, int &e2, int &f2)
{
  int nums[6];
  int sum = 0;
  
  nums[0] = a2;
  nums[1] = b2;
  nums[2] = c2;
  nums[3] = d2;
  nums[4] = e2;
  nums[5] = f2;
  for(int i = 0; i < 6; i++){
    sum += nums[i];
  }

  int n = sizeof(nums) / sizeof(nums[0]);

  sort(nums, nums + n);

  a2 = nums[0];
  b2 = nums[1];
  c2 = nums[2];
  d2 = nums[3];
  e2 = nums[4];
  f2 = nums[5];

  return sum;
}

int main() {
  srand(time(NULL));
  //6 rand integers between 100 and 500 
  
  int max = 500;
  int min = 100;
  int a = rand() % max + min;
  int b = rand() % max + min;
  int c = rand() % max + min;
  int d = rand() % max + min;
  int e = rand() % max + min;
  int f = rand() % max + min;

  // Random generated numbers before sort
  cout << " Before: " << endl
                     << " a: " << a << endl
                     << " b: " << b << endl
                     << " c: " << c << endl
                     << " d: " << d << endl
                     << " e: " << e << endl
                     << " f: " << f << endl;

  int sum = sort6(a,b,c,d,e,f); 

  // Variables sorted in increasing value
  cout << " \nAfter: " << endl
                     <<" a: " << a << endl
                     << " b: " << b << endl
                     << " c: " << c << endl
                     << " d: " << d << endl
                     << " e: " << e << endl
                     << " f: " << f << endl;

  cout << "Sum: " << sum;
  return 0;
}

