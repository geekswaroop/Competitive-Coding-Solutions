#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,cnt=1,temp;
  string s1,s;
  cin>>n;
  temp=n-1;
  cin>>s;
  while(temp--)
  {
    cin>>s1;
    if(s1!=s)
      {
        cnt++;
        s=s1;
        continue;
      }
      else
      {
        s=s1;
        continue;
      }
  }
  cout<<cnt<<endl;
}
