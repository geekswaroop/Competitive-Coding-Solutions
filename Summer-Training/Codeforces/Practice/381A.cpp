/*#include <bits/stdc++.h>


using namespace std;
int main()
{

	long long n,cnt=0,temp,i,s=0,d=0;

  vector<int> v;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>temp;
    v.push_back(temp);
  }
  while(n--)
  {
    if(cnt%2==0)
    {
      if(v.front()>v.back())
      {
        s+=v.front();
        v.erase(std::find(v.begin(),v.end(),v.front()));
      }
      else
      {
        s+=v.back();
        v.erase(std::find(v.begin(),v.end(),v.back()));
      }
    cnt++;
    continue;
    }
    if(cnt%2==1)
    {
      if(v.front()>v.back())
      {
        d+=v.front();
        v.erase(std::find(v.begin(),v.end(),v.front()));
      }
      else
      {
        d+=v.back();
        v.erase(std::find(v.begin(),v.end(),v.back()));
      }
    cnt++;
    continue;
    }


  }
  cout<<s<<" "<<d<<endl;
	return 0;
}
*/
//Better 2 pointer O(n) implementation

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int l,r,cnt=0,n,i,s=0,d=0;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  l=0,r=n-1;
  while(l<(r+1))
  {
    if(a[l]>a[r])
    {
      if(cnt%2==0)
      {
        s+=a[l];
        cnt++;
      }
      else
      {
       d+=a[l];
       cnt++;
      }
      l++;
    }
    else
    {
      if(cnt%2==0)
      {
        s+=a[r];
        cnt++;
      }
      else
      {
       d+=a[r];
       cnt++;
      }
      r--;
    }
  }
  cout<<s<<" "<<d<<endl;

}
