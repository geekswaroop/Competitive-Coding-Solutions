//upsolved after reading tutorial
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x,y,i,cnt=0;
  cin>>n>>x>>y;
  string s;
  cin>>s;
  for(i=n-x;i<n;i++)
  {
    if(i==(n-y-1)) cnt+=(s[i]=='0');
    else cnt+=(s[i]=='1');
  }
  cout<<cnt<<endl;


}
