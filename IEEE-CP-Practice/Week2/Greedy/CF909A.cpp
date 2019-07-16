/*
Status AC, Submission COunt:1
RT:1.5
TT:4
CT:1.5
DT:1
TotalT:8
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
  string ans,first,second;
  int i,j;
  cin>>first>>second;
  ans+=first[0];
  for(i=1;i<first.size();i++)
  {
    if(first[i]<second[0])
      ans+=first[i];
    else
      break;
  }
  ans+=second[0];
  cout<<ans<<endl;
}
