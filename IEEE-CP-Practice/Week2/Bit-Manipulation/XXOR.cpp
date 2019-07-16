		
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
	ll n,q,i,j,k;
	cin>>n>>q;
	ll a[n+5];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(q--)
	{
		ll l,r,prev;
		cin>>l>>r;
		for(i=0;i<(1<<31);i++)
		{
			ll sum=0;
			for(j=l;j<=r;j++)
			{
				sum+=a[j]^i;
			}
			prev=sum;
			sum=max(prev,sum);
		}
		cout<<sum<<endl;
	}

  	return 0;
}