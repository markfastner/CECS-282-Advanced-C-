// Thomson Nguyen, Edward Kuoch, Mark Fastner, Abraham Ungos
//Class(CECS 282-06)
//Due Date 04/27/2021
//Demoed at: 7:46pm

#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;
//Use typedef to define StrIntMap as map<string,int>
typedef map<string, int> StrIntMap;

//Function countWord to count the number of word use in as filestream and words as a map container
//YOUR CODE

void countWords(istream& in, StrIntMap& words) {

  string s;

     while (in >> s) {
        ++words[s];
     }
  }       

  int main()
   {
    //Define an ifstream object called in to associate the file data.txt
    ifstream in ("data.txt");
    if (!in)
    {
        exit(EXIT_FAILURE);
    }

    //Declare w as a map container - key as string , value as integer. Use type StrIntMap
    //YOUR CODE
    StrIntMap w;
    //Call function countWords
    //YOUR CODE
    countWords(in, w);
     //Use a for loop and iterator today display the keys and values
     //YOUR CODE
     
 for (map<string, int>::iterator p = w.begin(); p != w.end(); ++p) {
        cout << p->first << " : "
                  << p->second << " times.\n";
     }
  }