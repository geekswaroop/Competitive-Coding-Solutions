#include<bits/stdc++.h>
using namespace std;
int main()
{
  char a[105];
  cin>>a;
  int ln=strlen(a);
  int i,turns=0;
  for(i=0;i<ln-1;i++)
  {
    turns+=min(abs(a[i+1]-a[i]),(26-abs(a[i+1]-a[i])));

  }
  turns+=min(abs(a[0]-'a'),(26-abs(a[0]-'a')));
  cout<<turns<<endl;
}
