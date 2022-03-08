//names: Mark Fastner, Gabriel Zermeno, William Pham
//date: 2/19/2021
//demo time: 7:53PM

#include <iostream>
using namespace std;
class Can
  {
    private:
      string contents;
      int volume;
    public:
      Can();
      Can(string, int);
      void setVolume(int v);
      void setContents(string c);
      int getVolume();
      void display();
      string getContents();
  };

Can::Can()
{
  contents = "empty";
  volume = 0;
}

Can::Can(string c, int v)
{
  contents = c;
  volume = v;
}

void Can::setVolume(int v) {
  volume = v;
}

void Can::setContents(string c) {
  contents = c;  
}

int Can::getVolume()
{
  return volume;
}

string Can::getContents()
{
  return contents;
}

void Can::display()
{
  cout << contents << ":" << volume << "\n";
}

void pour(Can &Can1, Can &Can2) {
  int sum = Can1.getVolume() + Can2.getVolume();
  string contents = Can1.getContents() + "," + Can2.getContents();
  Can1.setVolume(sum);
  Can1.setContents(contents);
  Can2.setContents("empty");
  Can2.setVolume(0);
}

Can mix(Can Can1, Can Can2) {
  Can rCan(Can1.getContents() + "," + Can2.getContents(), Can1.getVolume() + Can2.getVolume());
  return rCan;
}

void stretch(Can &Can1, int expand) {
    Can1.setVolume(Can1.getVolume() + expand);
}

int main()
{
     Can c1("Peaches", 15);
     Can c2("Peas", 20);
     Can c3("soup", 24);
     Can c4 = mix(c1,c3); // c4 will have a mixture of c1 and c2. c1 and c3 remain unchanged
     pour(c2,c1); // pour c1 into c2. c1 will be empty
     stretch(c3,20); // stretch c3 by 20 ounces
     cout << "C1 - ";
     c1.display(); // empty:0
     cout << "C2 - ";
     c2.display(); // Peas,Peaches:35
     cout << "C3 - ";
     c3.display(); // soup:44
     cout << "C4 - ";
     c4.display(); // Peaches, soup:39

     return 0;
}