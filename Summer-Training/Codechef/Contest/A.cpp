#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	//std::ios::sync_with_stdio(false);
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--)
	{  int flag=0;
    int r,c,i,j;
    cin>>r>>c;
    int a[r+5][c+5];
    for(i=1;i<=r;i++)
    {
      for(j=1;j<=c;j++)
      {
        cin>>a[i][j];
      }
    }
    for(i=2;i<=r-1;i++)
    {
      for(j=2;j<=c-1;j++)
      {
        if(a[i][j]<4)
          continue;
        else
          {
            flag=1;break;
          }

      }
      if(flag==1) break;
    }

      for(j=2;j<=c-1;j++)
      {
        if(a[1][j]<3 && a[r][j] < 3) continue;
        else
        {
          flag=1;
          break;
        }
      }
      for(j=2;j<=r-1;j++)
      {
        if(a[j][1]<3 && a[j][c] < 3) continue;
        else
        {
          flag=1;
          break;
        }
      }


    if(a[1][1]<2 && a[1][c]<2 && a[r][1]<2 && a[r][c] < 2) continue;
    if(flag==1)
     cout<<"Unstable"<<endl;
    else
     cout<<"Stable"<<endl;
	}
	return 0;
}
