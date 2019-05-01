#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,temp,i;
  cin>>n>>k;
  temp=n/k;
  while(temp--)
  {
    for(i='a';i<'a'+k;i++)
    {
      printf("%c", i);
    }
  }
  for(i='a';i<'a'+n%k;i++)
  {
    printf("%c", i);
  }
}
