		
/**
*	Name: K Krishna Swaroop (@geekswaroop, </www.geekswaroop.github.io>)
*	Institute: National Institute of Technology Karnataka Surathkal
Status:
SC:
RT:
TT:
CT:
DT:
TT:
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
#define fr(i,n) for(i=0;i<n;i++)
#define fri(i,a,b) for(int i = (a); i <= (b); i++)
#define frd(i,a,b) for(int i = (a); i >= (b); i--)
#define test int t; cin >> t; while(t--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define N 1e6+7
#define PI acos(-1.0)
#define set0(a)     memset(a,0,sizeof(a))
#define setneg(a)   memset(a,-1,sizeof(a))
#define setinf(a) memset(a,126,sizeof(a))

int main() {
	off;
	int n,i,a,b;
	vector< pair<int,int> > ratings;
	cin>>n;
	int temp=n;
	while(temp--)
	{	
		cin>>a>>b;
		ratings.push_back(make_pair(a,b));
	}
	
	for(i=0;i<n;i++)
	{
		if(abs(ratings[i].first-ratings[i].second)!=0)
		{
			cout<<"rated"<<endl;
			return 0;
		}
	
	}
	for(i=0;i<n-1;i++)
	{
	    if(ratings[i+1].first>ratings[i].first)
	    {
	        cout<<"unrated"<<endl;
	        return 0;
	    }
	}
	if(i == n-1)
	{
		cout<<"maybe"<<endl;
		
	}
  	return 0;
}
