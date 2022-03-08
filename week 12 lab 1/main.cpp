// Names: Mark Fastner, Ghabrille Ampo, Claudia Fierro
// Date: 4/606/2021
// Time Demoed 8:37
#include <string>
#include <iostream>
#include "LinkedList.h"
#include "Student.h"
using namespace std;

int main() {

   list myList;
   cout << myList.size();

   Student s1("Mark", 4.0, 123);
   Student s2("Claudia", 3.2, 456);
   Student s3("John", 3.5, 852);
   Student s4("Mary", 1.8, 423);
   Student s5("Albert", 2.1, 995);
   Student s6("Alex", 2.5, 412);
   Student s7("Jane", 3.8, 598);

  

    myList.add(s1);

    myList.add(s2);

    myList.add(s3);

    myList.add(s4);

    myList.addHead(s5);

    myList.addHead(s6);

    myList.addHead(s7);

    cout << "\nSize..." << myList.size()<< endl;

    cout << myList.to_string();

    cout << "\nSize..." << myList.size()<< endl;

    cout << myList.to_string();

    cout << "\nDelete Tail.. " << myList.deleteTail().getName();

    cout << "\nSize..." << myList.size()<< endl;

    cout << myList.to_string();

    return 0;

}