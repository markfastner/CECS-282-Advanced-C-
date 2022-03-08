#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <string>
using namespace std;

  class Airplane{
    private:
      string model;
      int altitude;
      int maxaltitude;
      int minaltitude;  
    public:
      Airplane(string, int, int, int);
      void display();
      void setAltitude(int);
      bool crash(Airplane);
      int getAltitude();   
  };
  #endif


