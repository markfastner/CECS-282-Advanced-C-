#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
//#include "LinkedList.h"
using namespace std;

class Student{
private:
  string name;
  double gpa;
  int ID;
public:
  Student();
  Student(string N, double G, int I);
  void setName(string n);
  string getName();
  void setGpa(double g);
  double getGpa();
  int getId();
  void output();
  //string to_string();

};
#endif