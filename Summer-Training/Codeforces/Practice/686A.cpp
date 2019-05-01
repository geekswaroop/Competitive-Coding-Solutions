#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,x,d,cnt=0;
  char a;
  cin>>n>>x;
  while(n--)
  {
    cin>>a>>d;
    if(a == '+') x+=d;
    else
    {
      if(x<d){cnt++;}
      else {x-=d;}
    }
  }
  cout<<x<<" "<<cnt<<endl;
}
