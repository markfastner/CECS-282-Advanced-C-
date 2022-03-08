#ifndef CAN_H
    #define CAN_H
      #include <iostream>
      #include <string>
      #include <cstring>
      using namespace std;
      class Can
      {
        public:
          Can();
          Can(string c, int v);
          /**Member Func**/
          // Can operator+(Can oth);
          // Can operator-(Can oth);
          Can operator=(Can oth);
          //
          friend &operator<<(ostream &co, Can &oth);
  
          string getContents() const;
          int getVol() const;
          void setContents(string str);
          void setVol(int a);

        private:
          string contents;
          int volume;
      };

#endif