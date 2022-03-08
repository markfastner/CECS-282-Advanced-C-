//names: Mark Fastner, Edward Kuoch, Alan Marin
//CECS 282-06
//week 14 lab 1
//Time Demoed: 7:50PM

#include <iostream>
using namespace std;


int powerFunctionIterative(int a, int b){
  int product = 1;
  for (int i = 0; i < b; i++){
    product *= a;
  }
  return product;
}

int powerFunctionRecursion(int a, int b){
  if(b == 1){
    return a;
  }
  else if(b == 0){
    return 1;
  }
  else{
    return a * powerFunctionIterative(a, --b);
  }
}


int main() {
  cout << "Hello World!\n";
  //int a = 4;
 // int b = 5;
  //cout << "Recursion: " << powerFunctionRecursion(a, b) << endl;
 // cout << "Iteratice: " << powerFunctionIterative(a, b) << endl;
 for(int i = 0; i < 36; i++){
   cout << "i" <<  i;
   cout << "Recursion: " << powerFunctionRecursion(2, i) << endl;
   cout << "Iteratice: " << powerFunctionIterative(2, i) << endl;
 }
}
