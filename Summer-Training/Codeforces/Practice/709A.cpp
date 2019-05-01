#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,b,d,sum=0,cnt=0,temp;
  cin>>n>>b>>d;
  while(n--)
  {
    cin>>temp;
    if(temp>b) {continue;}
    sum+=temp;
    if (sum>d){ sum=0;cnt++;continue;}

  }
  cout<<cnt<<endl;
}
