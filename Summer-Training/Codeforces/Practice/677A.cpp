#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,h,cnt=0,temp;
  cin>>n>>h;
  while(n--)
  {
    cin>>temp;
    if(temp>h)
      cnt+=2;
    else
      cnt++;
  }
  cout<<cnt<<endl;
  
}
