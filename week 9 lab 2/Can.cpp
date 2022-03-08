#include "Can.h"
 //** Without Member Operator **/ ===========================================================================
Can operator+(Can one, Can two)
{
  Can ret;
  if(one.getContents() != two.getContents()){
    ret.setContents("Mixed");
  }else{
    ret.setContents(one.getContents());
  }
  ret.setVol(one.getVol() + two.getVol());
  return ret;
}

Can operator-(Can one, Can two)
{
  Can ret;
  ret.setVol(one.getVol() - two.getVol());
  if(one.getVol() < 0)
  {
    ret.setVol(0);
  }
  ret.setContents(one.getContents());
  return ret;
}

// Can operator=(Can one, Can two)
// {
//   one.setVol(two.getVol());
//   one.setContents(two.getContents());
  
//   return one;
// }

Can::Can()
{
  contents = "air";
  volume = 0;
}

Can::Can(string c, int v)
{
  contents = c;
  volume = v;
}

string Can::getContents() const
{
  return contents;
}

int Can::getVol(){ const
  return volume;
}

void Can::setContents(string str)
{
  this->contents = str;
}

void Can::setVol(int a){
  this->volume = a;
}

ostream &operator<<(ostream &co, const Can &oth){

  co << " - Contents: " << oth.getContents();
  co << ", Volume: " << oth.getVol() << " - ";
  return co;
}

//** With Member Operator **//  ===========================================================================

// Can Can::operator+(Can oth)
// {
//   Can ret;
//   if(this->contents != oth.getContents())
//   {
//     ret.setContents("Mixed");
//   }else{
//     ret.setContents(oth.getContents());
//   }
//   ret.setVol(this->volume + oth.getVol());


//   return ret;
// }

// Can Can::operator-(Can oth)
// {
//   Can ret;
//   cout << "This vol: " << this->volume << endl; 
//   cout << "Other vol: " << oth.getVol() << endl; 
//   cout << "Expected Vol: " << this->volume - oth.getVol() << endl;
//   ret.setVol(this->volume - oth.getVol());
//   if(ret.getVol() < 0)
//   {
//     ret.setVol(0);
//   }
//   ret.setContents(this->contents);
//   cout << "New Vol: " << ret.getVol() << endl;
//   return ret;
// }

Can Can::operator=(Can oth)
{
  this->contents = oth.contents;
  this->volume = oth.volume;
  return *this;
}