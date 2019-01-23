#include <iostream>

using namespace std;

int main()
{
   int i,n,t;
   cin>>n>>t;
   if(t!=10)
   {cout<<t;
   for(i=0;i<(n-1);i++)
   {
       cout<<"0";
   }}
   else if(t==10 && n!=1)
    {cout<<t;
        for(i=0;i<(n-2);i++)
        {
            cout<<"0";
        }
    }
    else
        cout<<"-1";

    return 0;
}
