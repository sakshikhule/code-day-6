#include<iostream>
#include<conio.h>
using namespace std;
main()
{
   int x,y;
   cout<<"enter x coordinate = ";
   cin>>x;
   cout<<"enter y coordinate = ";
   cin>>y;
   if((x>0)&& (y>0))
   {
      cout<<"This point lies in first quadrant.";
   }
   else
   {
      if((x<0) && (y>0))
      {
         cout<<"This point lies in second quadrant.";
      }
      else
      {
         if((x<0) && (y<0))
         {
            cout<<"This point lies in third quadrant.";
         }
         else
         {
             cout<<"This point lies in fourth quadrant.";
        }
      }
    }
    getch();
}
