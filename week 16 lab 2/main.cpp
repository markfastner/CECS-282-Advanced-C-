// Mark Fastner, John Apale, Joshua Decano
// Demoed: 7:45PM

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

template <class type>

type Fibonacci(type n){
  type a = 0, b = 1, c = 0;
  for(type i = 0; i <n; i++){
    c = a + b;
    a = b;
    b = c;
    if(c < 0){
      throw string("Overflow error at " + to_string(i));
      break;
    }
  }
  return c;
}

int main() {
  
short s1 = 125;

try {

    cout << "Data type short has "<< sizeof(s1)<< "bytes."<<endl;

    cout << "Fibonacci("<<s1<<") is: "<< Fibonacci(s1);

}

catch (string error){

  cout << error << endl;

}

char c1 = 125;

try {

    cout << "Data type char has "<< sizeof(c1)<< "bytes."<<endl;

    cout << "Fibonacci("<<c1<<") is: "<< Fibonacci(c1);

}

catch (string error){

 cout <<  error << endl;

}

int i1 = 125;

try {

    cout << "Data type int has "<< sizeof(i1)<< "bytes."<<endl;

    cout << "Fibonacci("<<i1<<") is: "<< Fibonacci(i1);

}

catch (string error){

 cout << error << endl;

}

long l1 = 125;

try {

    cout << "Data type long has "<< sizeof(l1)<< "bytes."<<endl;

    cout << "Fibonacci("<<l1<<") is: "<< Fibonacci(l1);

}

catch (string error){

 cout << error << endl;

}
}