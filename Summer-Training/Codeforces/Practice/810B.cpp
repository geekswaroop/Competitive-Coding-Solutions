		
/**
*	Name: K Krishna Swaroop (@geekswaroop, </www.geekswaroop.github.io>)
*	Institute: National Institute of Technology Karnataka Surathkal
Status: WA
SC: 3
RT: 1.5
TT: 11
CT: 7
DT: 3
TT: 23
*/
/* #include <bits/stdc++.h>
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
	ll n,f,i,j,k,ans=0,cnt=0,cnst=0;
	cin>>n>>f;
	ll prod[n+5];
	ll cust[n+5];
	ll day[n+5]={0};
	for(i=1;i<=n;i++)
	{
		cin>>prod[i]>>cust[i];
		if(prod[i]<cust[i]) cnt++;
	}
		pair<ll,ll>p[cnt+1];

	j=0;
	for(i=1;i<=n;i++)
	{
		if(prod[i]<cust[i])
		{	
			p[j].first=min(2*prod[i],cust[i]);
			p[j].second=i;
			j++;
		}
	}
	sort(p,p+cnt+1);
	for(i=cnt;i>max(cnst,cnt-f);i--)
	{
		ans+=p[i].first;
		day[p[i].second]=1;
	}
	for(i=1;i<=n;i++)
	{
		if(!day[i])
		{
			ans+=min(prod[i],cust[i]);
		}
	}
	cout<<ans<<endl;

  	return 0;
} */


		
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
/*#include <bits/stdc++.h>
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
	ll n,f,i,j,k,ans=0,cnt=0,cnst=0;
	cin>>n>>f;
	ll prod[n+5];
	ll cust[n+5];
	ll day[n+5]={0};
	for(i=1;i<=n;i++)
	{
		cin>>prod[i]>>cust[i];
		if(prod[i]<cust[i]) cnt++;
	}
		vector<ll>p;

	j=0;
	for(i=1;i<=n;i++)
	{
		if(prod[i]<cust[i])
		{	
			
			p.push_back(make_pair(min(2*prod[i],cust[i]),i));
		}
	}
	sort(p.rbegin(),p.end());
	for(i=1;i<=f;i++)
	{
		ans+=p[i].first;
		day[p[i].second]=1;
	}
	for(i=f;i<==n;i++)
	{
		if(!day[i])
		{
			ans+=min(prod[i],cust[i]);
		}
	}
	cout<<ans<<endl;

  	return 0;
}
*/

		
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
	int f,n,i;
	cin>>n>>f;
	int k[n+5];
	int l[n+5];
	ll ans=0;
	vector< pair<int,int> >a;
	for(i=0;i<n;i++)
	{
		cin >> k[i] >> l[i];
   		 a.push_back(make_pair(min(2 * k[i], l[i]) - min(k[i], l[i]), i));
	}
	sort(a.rbegin(), a.rend());
	for(i=0;i<f;i++)
	{
		ll pos=a[i].second;
		ans+=min(2*k[pos],l[pos]);
	}
	for(i=f;i<n;i++)
	{
		ll pos=a[i].second;
		ans+=min(k[pos],l[pos]);
	}
cout<<ans<<endl;
  	return 0;
}