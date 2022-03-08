//names: Mark Fastner, Jonathan Truong, William Pham and Deva Nguyen
// Class (CECS 282-06)
//week 6 lab 2
//2/25/2021
//demo time: 8:16PM
#include <iostream>
#include <string>
using namespace std;

struct car
{
    string make;
    string model;
    int year;
    string color;
    int mileage;
    int mpg;
    float price;
};

void displayCars(car *cars)
{
    car *carp = cars;
    //cout << carp->year;
    for(int i = 0; i < 5; i++) 
    {
      cout << carp->make << " "<< carp->model << " " << carp->year << ", ";
      cout << carp->color << ", "<< carp->mileage << ", " << carp->mpg << "mpg";
      cout << ", $" << carp->price << endl;

      carp = carp + 1;

      //cout << cars[i].year << cars[i].make << " " << cars[i].model;
      //cout << ": " << cars[i].
    }       
}

int main() {
  car carLot[5];
  
  carLot[0] = car{"VW", "golf", 2020, "black", 100200, 10, 14999.0};
  carLot[1] = car{"Mitsubishi", "Mirage", 2018, "silver", 40000, 35, 10000};
  carLot[2] = car{"Mercedes", "slk", 2005, "white", 250145, 27, 8940.0};
  carLot[3] = car{"Mazda", "Miata", 1990, "black", 100000, 25 , 3250.99};
  carLot[4] = car{"Toyota", "Supra", 2020, "red", 10, 35, 49990.00};
  
  
  //int size = sizeof(carLot)/sizeof(carLot[0]);
  displayCars(carLot);
  
}