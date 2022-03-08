//names: Mark Fastner, Efrain Miranda, John Apale
//CECS 228 sec 06
//date: 3//11/2021
//demo time: 7:58PM
#include <iostream>

 

using namespace std;

const int SIZE = 5;

 

int main () {

   int  grade[SIZE] = {10, 20, 30, 40, 57};
   int sum = 0;
   double avg = 0;
   for (int i = 0; i < SIZE; i++) {
     
      cout << "Value of grade[" << i << "] = ";

      cout << grade[i] << endl;

      sum += grade[i];

   }

  cout << "Sum: " << sum << endl;
  avg = (double)sum / (double)SIZE;
  cout << "Average: " << avg << endl;
   
   int *aptr[SIZE];
   for(int i = 0; i < SIZE; i++){
     aptr[i] = &grade[i];
     cout << "Value of pointer array[" << i << "] = ";
     cout << *aptr[i] << endl;
   }
   for(int i = 0; i < SIZE; i++){
     cout << "Address of pointer array[" << i << "] = ";
     cout << aptr[i] << endl;
   }


   return 0;

}