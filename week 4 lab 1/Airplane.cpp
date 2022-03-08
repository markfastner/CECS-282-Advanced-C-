#include<iostream>
#include "Airplane.h"
using namespace std;


Airplane::Airplane(string model, int height, int minAlt, int maxAlt)
  : model(model), altitude(height), minaltitude(minAlt), maxaltitude(maxAlt){}

void Airplane::display()
{
  cout<<"Model: "<<model<<"Altidude: "<<altitude<<endl;
}


void Airplane::setAltitude(int alt){
  altitude = alt;
}

int Airplane::getAltitude(){
  return altitude;
}

bool Airplane::crash(Airplane a2){
  if(abs (altitude - a2.getAltitude()) < 200){
    return true;
  }
  return false;
}
