#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,p=0,c=0,temp;
  cin>>n;
  while(n--)
  {
    cin>>temp;

    if(temp<0 && p>0)
    { p--;
      continue;
    }
    if(temp>0)
    { p+=temp;
    }
    if(temp<0 && p==0)
    {c++;
      continue;}
  }
  cout<<c<<endl;
}
