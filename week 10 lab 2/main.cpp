// Names: Jacob Gurley, Abraham Ungos, 
// CECS 282-06
// Lab Week 10 (Lab 2)
// 3/25/2021
// Time Demoed:
#include <iostream>
#include <string>
using namespace std;
class Can{
  private:
  string name;
  int volume;
  public:
  Can();
  Can(string name,int weight);
  Can(const Can &can);
  ~Can();
  Can &operator=(const Can &can);
  int getVolume();
  void display();
};


Can::Can(){
  name = "BANK";
  volume = 0;
  
}

Can ::Can(string c, int v)
{
  name = c;
  volume = v;
}

Can::Can(const Can &can)
{
  cout << "Entering Copy Constructor\n";
  name = can.name;
  volume = can.volume;
}

Can::~Can()
{
  cout << "In the Destructor\n";
}

Can &Can::operator=(const Can &can)
{
  name = can.name;
  volume = can.volume;
  cout<<"Entering assignment operator\n";
  return *this;
}

int Can::getVolume()
{
  return volume;
}

void Can::display()
{
  cout << volume << " ounce can of " << name << endl;
}

Can max(Can c1, Can c2){
  if(c1.getVolume() > c2.getVolume()){
    return c1;
  }
  else
    return c2;
}

int main() {
  Can c1("Coke",12);
  Can c2("beans",20);
  Can c3 = c2;
  {
      Can c4("juice", 32);
      Can c5("juice", 12);
      c4 = c5;
      cout << "\n--------Can #4->";
      c4.display();
      cout << "\n--------Can #5->";
      c5.display();
  }
    c3 = max(c1, c2);

    cout << "\n--------Max size->";

    c3.display();

    // the following code does not compile - why?

     //cout << "--------Can #4->";

     //c4.display();              

     //cout << "--------Can #5->";

     //c5.display();

}
