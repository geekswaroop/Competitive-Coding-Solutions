#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,mn,mx,i;
  cin>>n;
  long long a[n+5];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    if(i==0)
    {
      mn=abs(a[0]-a[1]);
      mx=abs(a[0]-a[n-1]);
    }
    else if(i==n-1)
    {
      mn=abs(a[n-1]-a[n-2]);
      mx=abs(a[n-1]-a[0]);
    }
    else
    {
      mn=min(abs(a[i]-a[i-1]), abs(a[i]-a[i+1]));
      mx=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
    }
    cout<<mn<<" "<<mx<<endl;

  }
}
