#include <iostream>
#include "Point.cpp"
using namespace std;

class Rectangle
{
private:
   Point upLeft;
   Point lowRight;

public:
   bool InitMembers(const Point &ul, const Point &lr)
   {
       if(ul.GetX()>lr.GetX() || ul.GetY()>lr.GetY())
        {
            cout<<"잘못된 위치정보 전달"<<endl;
            return false;
        }

   upLeft=ul;
   lowRight=lr;
   return true;
   }
   void ShowRecInfo() const
   {
       cout<<"좌 상단: "<<'['<<upLeft.GetX()<<", ";
        cout<<upLeft.GetY()<<']'<<endl;
        cout<<"우 하단: "<<'['<<lowRight.GetX()<<", ";
        cout<<lowRight.GetY()<<']'<<endl<<endl;
   }
};