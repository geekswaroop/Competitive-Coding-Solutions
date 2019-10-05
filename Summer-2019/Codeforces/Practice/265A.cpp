#include<bits/stdc++.h>
using namespace std;
int main()
{
  char a[55],b[55];
  int i,pos=0;
  cin>>a>>b;
  int ln=strlen(b);
  for(i=0;i<ln;i++)
  {
    if(b[i]==a[pos])
      pos++;
    else
    continue;
  }
  cout<<pos+1<<endl;
}
