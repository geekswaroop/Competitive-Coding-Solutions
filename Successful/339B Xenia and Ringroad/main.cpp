/*#include <iostream>

using namespace std;

int main()
{
    int m,n,i,cost=0;
    cin>>n>>m;
    int a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cost=(a[0]-1);
    for(i=0;i<m-1;i++)
    {
        if(a[i+1]>=a[i])
            cost+=(a[i+1]-a[i]);
        else
        {
            cost+=(n-a[i]+a[i+1]);
        }
    }
    cout<<cost<<endl;
    return 0;
}*/
#include<iostream>
  using namespace std;

  int main()

  {
      long long int  n,m,i,j,x=1,cn=0;
      cin>>n>>m;

      int a[m];
      for( i=0; i<m; i++) cin>>a[i];

      for ( i=0; i<m; i++)

      {
          if( a[i]>x)
          {
              cn+=a[i]-x;
              x=a[i];
          }
          if( a[i]<x)
          {
              cn+=n-x+a[i];
              x=a[i];
          }
      }
      cout<<cn<<endl;

  }
