#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long i,n,sum=0;
  int a[10];
  char s[100001];
  for(i=0;i<4;i++)
  {
    cin>>a[i+1];
  }
  cin>>s;
  int ln=strlen(s);
  for(i=0;i<ln;i++)
  {
    sum+=a[(s[i]-'0')];
  }
  cout<<sum<<endl;
}
