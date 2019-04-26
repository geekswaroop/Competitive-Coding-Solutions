#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k,r;
  cin>>k>>r;
  int number=1;
  while(1)
  {
    if((k*number)%10 == r || (k*number)%10 == 0)
      break;
    else
      number++;

  }
  cout<<number<<endl;
}
