// Name: Mark Fastner, Jacob Gurley, Denise Paredes, Aryan Sanyal
// Class (CECS 282-06)
// Due Date 02/09/21
// Demoed at 8:01 pm
//I certify that this program is my own original work. I did not copy any part of program //from any other source. I further certify that I typed each and every line of code in this program. 

#include <iostream>
#include<time.h>
#include "Airplane.h"

using namespace std;

int main() {
  int crash_counter = 0;
  srand(time(NULL));
  
  Airplane p1 = Airplane ("Lear Jet",1000, 1000, 1500);
  Airplane p2 = Airplane("MIG Fighter", 1000, 1000, 2500);
 
  for (int i = 0; i < 1000; i++){  
    p1.setAltitude(rand() % 1500);
    p2.setAltitude(rand()%2500);

    if(p1.crash(p2) == true){
      p1.display();
      p2.display();
      crash_counter++;
    }
  }

  cout << "Total crashes: " << crash_counter << endl;
  double crash_percentage = (double) crash_counter / 1000 * 100;
  cout << "Crash percentage: " << crash_percentage << "%";
}