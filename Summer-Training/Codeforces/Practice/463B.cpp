		
/**
*	Name: K Krishna Swaroop (@geekswaroop, </www.geekswaroop.github.io>)
*	Institute: National Institute of Technology Karnataka Surathkal
Status: WA/AC
SC: 2
RT: 1
TT: 4
CT: 1.5
DT: 3
TT: 9.5
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
	int n,i,cost=0,energy=0,sum=0;
	cin>>n;
	int a[n+5];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(i=1;i<n;i++)
	{
		//sum+=(a[i]-a[i+1]);
		energy+=(a[i]-a[i+1]);
		if(energy<0)
		{
			cost+=abs(energy);
			energy=0;
		}
	}
	cost+=a[1];
	cout<<cost<<endl;


  	return 0;
}