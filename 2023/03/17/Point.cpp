#include <iostream>
using namespace std;

class Point
{
private:
   int x;
   int y;

public:
   bool InitMembers(int xpos, int ypos)
   {
       if(xpos<0 || ypos<0)
   {
      cout<<"벗어난 범위의 값 전달"<<endl;
      return false;
   }

   x=xpos;
   y=ypos;
   return true;
   }
   int GetX() const
   {
       return x;
   }
   int GetY() const
   {
       return y;
   }
   bool SetX(int xpos)
   {
       if(0>xpos || xpos>100)
        {
            cout<<"벗어난 범위의 값 전달"<<endl;
            return false;
        }
   x=xpos;
   return true;
   }
   bool SetY(int ypos)
   {
       if(0>ypos || ypos>100)
        {
            cout<<"벗어난 범위의 값 전달"<<endl;
            return false;
        }

   y=ypos;
   return true;
   }
};