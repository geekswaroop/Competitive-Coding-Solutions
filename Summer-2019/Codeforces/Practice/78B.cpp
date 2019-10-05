		
/**
*	Name: K Krishna Swaroop (@geekswaroop, </www.geekswaroop.github.io>)
*	Institute: National Institute of Technology Karnataka Surathkal
Status: AC
SC: 1
RT:	1
TT: 2.5
CT: 2
DT: 2
TT: 7.5
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
	int n,i,j,k,cnt,rem;
	cin>>n;
	char a[4]={'V','I','B','G'};
	string ans;
	n-=7;
	cnt=n/4;
	rem=n%4;
	for(i=0;i<cnt;i++)
	{
		ans+="VIBG";
	}
	for(i=0;i<rem;i++)
	{
		ans+=a[i];
	}
	ans="VIBG"+ans;
	ans=ans+"YOR";
	cout<<ans<<endl;
  	return 0;
}