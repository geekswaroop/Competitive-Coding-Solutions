#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,n,temp,cn_1=0,cn_2=0,cn_3=0,ans;
  vector<int>a;
  vector<int>b;
  vector<int>c;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    cin>>temp;
    if(temp==1){a.push_back(i);cn_1++;}
    if(temp==2){b.push_back(i);cn_2++;}
    if(temp==3){c.push_back(i);cn_3++;}
  }
  ans=min(cn_1,min(cn_2,cn_3));
  cout<<ans<<endl;
  for(i=0;i<ans;i++)
  {
    cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
  }
}
