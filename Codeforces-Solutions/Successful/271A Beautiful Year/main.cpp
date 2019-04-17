/*#include <iostream>

using namespace std;

int main()
{
    int b=0;
    int y;
    int arr[5];
    int key=1;
    int temp;
    cin>>y;
    for(int i=y;i<9001;i++)
    {    temp=i;
        while(i!=0)
        {
            arr[b++]=i%10;
            i/=10;
        }
    }

        for(int j=0;j<4;j++)
        {
            for(int k=j;k<4;k++)
                {if(arr[j]==arr[k])
                    key=0;
                    break;
                }
                if(key==0)
                    break;
        }
        if(key!=0)
        {
            cout<<temp;
        }
            /*{
                cout<<i;
                break;
            }

            return 0;
    } */

    #include<iostream>
  using namespace std;

  int main()
  {
      int y,n,i,ch=0;

      cin>>n;
      int a,b,c,d;
     for ( i=0; i<8000; i++){
           n++;
           y=n;
          a=y%10; y=y/10;

          b=y%10;  y=y/10;

          c=y%10; y=y/10;

          d=y;
          if(a!=b && a!=c && a!=d && b!=c&& b!=d && c!=d)

          {
              cout<<d<<c<<b<<a<<endl;
                return 0;
          }
     }

  }



