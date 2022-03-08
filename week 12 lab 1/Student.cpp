#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(){
  name = "";
  gpa = 0.0;
  ID = 0;
}
Student::Student(string N, double G, int I){
  name = N;
  gpa = G;
  ID = I;
}
void Student::setName(string n){
  name = n;
}
string Student::getName(){
  return name;
}
void Student::setGpa(double g){
  gpa = g;
}
double Student::getGpa(){
  return gpa;
}
int Student::getId(){
  return ID;

}
void Student::output(){
  cout << name << ", GPA: " << gpa << ", ID: " << ID;
}
//string Student::to_string(){
  //string temp = name + ", GPA: " + gpa + ", ID: " + ID
  ////return temp;
//}