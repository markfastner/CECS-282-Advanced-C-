//Mark Fastner, Alan Marin, Colin Creasman, Giovanni Contreras
// CECS 282 - 06
// Week 14 - Lab 02
// Time Demoed: : 8:27PM
#include <iostream>
#include <climits>
using namespace std;

int safeAdd(int x, int y) {
  int sum = x + y;
  if(sum < 0){
    throw "ERROR!!!: ";
  }

    return sum;
  }
  
 
  

int main() {
  int a1[] = {INT_MAX, INT_MAX, 1, 42};
  int a2[] = {INT_MAX, 1, 200, 1200};

  for (int i=0; i<4; i++){
    try{
      int sum = safeAdd(a1[i], a2[i]);

      cout << "added " << a1[i] << " and " << a2[i] << " and got a sum of " << sum << endl;
    }
  
    catch(const char* e){
       cout << "Their was an error adding : " << a1[i] << " and " << a2[i] <<endl;
    }
  }
}