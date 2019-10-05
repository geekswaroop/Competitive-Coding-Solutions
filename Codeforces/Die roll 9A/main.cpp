#include <iostream>

using namespace std;

int main()
{
   int y,w,temp1,temp2;
   cin>>y>>w;
   if(y<w)
   {
       temp1=w;
       w=y;
       y=temp1;
   }
   temp2=(6-y);
   switch(temp2)
   {
       case 0: cout<<"1/6";
                break;
       case 1: cout<<"1/3";
                break;
       case 2: cout<<"1/2";
                break;
       case 3: cout<<"2/3";
                break;
       case 4: cout<<"5/6";
                break;
       case 5: cout<<"1/1";
                break;
    }
    return 0;
}
