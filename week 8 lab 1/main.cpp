//Name: Garrett Chavez, Mark Fastner, Joshua Decano, Matthew Chen
//Class(CECS 282-06)
//Due Date 03/09/21
//Demoed at 8:04
#include <iostream>
using namespace std;

// returns the length of the cstring
int strlen(char *ch){
  int length = 0;
    while(ch[length] != '\0') {
      ++length;
    }
    return length;
}

char *strcpy(char* dest, char* source)
{
  int i;
  for(i = 0; source[i] != '\0'; i++){
    dest[i] = source[i];
  }

  dest[i] = '\0';

  return dest;
}

char *strcat(char* dest, char* source)
{
  char* ptr = dest + strlen(dest);

  while(*source != '\0'){
    *ptr++ = *source++;
  }

  *ptr = '\0';
  return dest;
}

int main() 
{
  char n[] = "Tacos";
  char n1[] = "burritos";
  cout << strlen(n) << endl;
  cout << strcat(n, n1) << endl;
  char n2[30];
  cout << strcpy(n2, n1) << endl;
  return 0;
}