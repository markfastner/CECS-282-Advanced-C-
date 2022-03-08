//Names: Mark Fastner, Edward Kuoch, Claudia Fierro
//Week 10 lab 1
//3/23/2021
//demo time: 8:26

//  main.cpp

//  LinkedList

//

#include <string>

#include <iostream>

#include "LinkedList.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

   

    std::cout << "Hello, World!\n";

    int a = 3;

    string s = "M";

    cout << s << a;

    s = s + to_string(a);

    cout << s;

    list myList;

    cout << myList.size();

  

    myList.add(1);

    myList.add(2);

    myList.add(3);

    myList.add(4);

    myList.addHead(11);

    myList.addHead(22);

    myList.addHead(33);

    cout << "\nSize..." << myList.size()<< endl;

    cout << myList.to_string();

    cout << "\nSize..." << myList.size()<< endl;

    cout << myList.to_string();

    cout << "\nDelelte Tail.. " << myList.deleteTail();

    cout << "\nSize..." << myList.size()<< endl;

    cout << myList.to_string();

    return 0;

}