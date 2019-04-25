#include <bits/stdc++.h>


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
