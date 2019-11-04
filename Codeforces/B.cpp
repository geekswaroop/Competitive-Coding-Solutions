		


		


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
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,h,d,not_possible=0,regeneration=-1,i=0;
		cin>>n>>x;
		int temp=n;
		int a[n];
		while(temp--)
		{
			cin>>d>>h;
			{
				regeneration = max(regeneration,(d-h)); 
			}
			a[i++]=d;
			//cout<<regeneration<<endl;
			if(d-h <= 0) 
				not_possible++;
		}
		int maxD = *max_element(a,a+n);
		int ans = 1;
		//cout<<maxD<<endl;
		x-=maxD;
		if(x>0)
		{
			if(regeneration<=0)
			{
				//cout<<"-1"<<endl;
				ans = -1;
				//continue;
			}	
			else
			{
				ans+=(x+regeneration-1)/regeneration;
			}
			//cout<<ans<<endl;
		}
		cout<<ans<<endl;

	}

  	return 0;
}

/*#include <bits/stdc++.h>

using namespace std;

const int N = 105;

int t;
int n, m;
int d[N], h[N];

int main() {
	cin >> t;
	for(int tc = 0; tc < t; ++tc){
		cin >> n >> m;
		int maxDH = -2e9;
		for(int i = 0; i < n; ++i){
			cin >> d[i] >> h[i];
			maxDH = max(maxDH, d[i] - h[i]);
		}

		int res = 1;	
		int maxD = *max_element(d, d + n);
		m -= maxD;
		if(m > 0){
			if(maxDH <= 0) res = -1;
			else res += (m + maxDH - 1) / maxDH; 	
		}	
		cout << res << endl;
	}
	
	return 0;
}*/