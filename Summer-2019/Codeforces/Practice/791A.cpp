#include<bits/stdc++.h>

using namespace std;
int main()
{
  long long l,b,cnt=0;
  cin>>l>>b;
  while(l<=b)
  {
    cnt++;
    l*=3;
    b*=2;
    continue;
  }
  cout<<cnt<<endl;
}
