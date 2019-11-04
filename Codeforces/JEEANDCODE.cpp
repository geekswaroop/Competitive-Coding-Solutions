-		
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
	long long n,m,k,i;
	int t;
	cin>>t;
	while(t--)
	{	
		long long limit = 0,grp_size,cnt,j;
		cin>>n>>m>>k;
		long long a[n+5];
		for(i=0;i<n;i++)
		{	
			cin>>a[i];
		}
		sort(a,a+n);
		j=0;
		for(limit=1;limit<1000;limit++)
		{
			cnt=0;
			//grp_size=0;
			//j=0;
			j=0;
			for(i=0;i<n;i++)
			{	
				grp_size=0;
				mn = a[j];
				if(abs(mn-a[i])<limit)
				{
					grp_size++;
				}
				if(grp_size>=k)
				{
					j = i;
					cnt++;
					continue;
				}
			}
		}
		//cnt is the count of the groups.

	}
  	return 0;
}