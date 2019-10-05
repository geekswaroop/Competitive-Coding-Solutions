#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x,y,m,i;
  cin>>n;
  int a[n+5];
  for(i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  cin>>m;
  while(m--)
  {
    cin>>x>>y;
    if(x!=1) a[x-1]+=(y-1);
    if(x!=n) a[x+1]+=(a[x]-y);
    a[x]=0;
  }
  for(i=1;i<=n;i++)
  {
    cout<<a[i]<<endl;
  }

}
