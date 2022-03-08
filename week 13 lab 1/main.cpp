//Sean Heidari, Colin Creasman, Thomson Nguyen, Mark Fastner
//Class(CECS 282-06)
//Due Date 04/13/2021
//Demo at 8:01pm

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> //for accumulator operations
using namespace std;

int main()
{
// an array of doubles
double arr[] = { 1.1, 2.2, 3.3, 2.2, 4.4 };

// Determine the array size
int arraySize = sizeof(arr)/sizeof(arr[0]);
// initialize vector v1 to array arr
vector<double> v1(arr, arr + arraySize);

//Display the contents of vector v1
for(auto i = v1.begin(); i != v1.end(); i++){
  cout << *i << " ";
}
cout << endl;


// Sorting the Vector in Ascending order
sort(v1.begin(), v1.end());
// Display the content of vector v1 after sorting
for(auto i = v1.begin(); i != v1.end(); i++){
  cout << *i << " ";
}
cout << endl;
// Reversing the Vector v1
reverse(v1.begin(), v1.end());
// Display the content of vector v1
for(auto i = v1.begin(); i != v1.end(); i++){
  cout << *i << " ";
}
cout << endl;
// Display the maximum element of vector v1
cout << "Maximum element of vector v1: " << *max_element(v1.begin(), v1.end())<<endl;
// Display the minimum element of vector v1
cout << "Minimum element of vector v1: " << *min_element(v1.begin(), v1.end())<<endl;
// Display the accumulation of all elements in vector v1
double max = 0;
for(auto i = v1.begin(); i != v1.end(); i++){
  max += *i;
}
cout << "Accumulation of all elements in vector v1: " << max << endl;
// Starting the summation from 0
max = 0;
for(auto i = v1.begin(); i != v1.end(); i++){
  max += *i;
}
cout << "Starting summation at 0: " << max << endl;
// Counts the occurrences of 2.2 from 1st to last element
int count = 0;
for(auto i = v1.begin(); i != v1.end(); i++){
  if(*i == 2.2){
    count++;
  }
}
// Display the counts
cout << "count: " << count << endl;
// Delete second element of vector
v1.erase(v1.begin() + 1);
// Display the v1 after erasing the element
for(auto i = v1.begin(); i != v1.end(); i++){
  cout << *i << " ";
}
cout << endl;
return 0;
}