// Group: Mark Fastner, Giovanni Quevedo, Miguel Echeverria
// Week 5 Lab 1
// Time Demoed: 8:04 PM

#include <iostream>
using namespace std;

void julToGreg(int & month, int & day, int & year, int JD);
int gregToJul(int month, int day, int year);
bool checkIfLeap(int year);


int main() {
  for(int i = 1000; i < 1500; i ++){
    
    if(checkIfLeap(i)){
      cout << i << " is a LeapYear." << endl;
    }
  }
}

//Leap Years have a date April 29th

//-Grab a year i //
//Set the date to April 28th, i
//Try to add 1 day using JD//Take it back to greg
//If the day is April 29th, we solid

bool checkIfLeap(int y){
  int month = 2;
  int day = 28;
  int year = y;

  int jd = gregToJul(month, day, year);
  jd++;
  julToGreg(month, day, year,jd);
  
  return (month == 2 ? true : false);
}

void julToGreg(int & month, int & day, int & year, int JD){
  
  int I,J,K;
  int L= JD+68569;                                                     
  int N= 4*L/146097;                                                     
  L= L-(146097*N+3)/4;                                               
  I= 4000*(L+1)/1461001;                                           
  L= L-1461*I/4+31;                                                  
  J= 80*L/2447;                                                      
  K= L-2447*J/80;                                                    
  L= J/11;                                                           
  J= J+2-12*L;                                                       
  I= 100*(N-49)+I+L;                                                           
  year= I;                                                           
  month= J;                                                          
  day= K;

}

int gregToJul(int month, int day, int year){
  int JD = day-32075+1461*(year+4800+(month-14)/12)/4+367*(month-2-(month-14)/12*12)      
         /12-3*((year+4900+(month-14)/12)/100)/4;  
  return JD;
}

/*
INTEGER YEAR,MONTH,DAY,I,J,K                                           
C                                                                               
      I= YEAR                                                                   
      J= MONTH                                                                  
      K= DAY                                                                    
C                                                                               
      JD= K-32075+1461*(I+4800+(J-14)/12)/4+367*(J-2-(J-14)/12*12)              
         /12-3*((I+4900+(J-14)/12)/100)/4        

*/