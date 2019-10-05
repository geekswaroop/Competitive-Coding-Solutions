		
/**
*	Name: K Krishna Swaroop (@geekswaroop, </www.geekswaroop.github.io>)
*	Institute: National Institute of Technology Karnataka Surathkal
Status: AC
SC: 1
RT: 2
TT: 2.5
CT: 10.5
DT: 1.5
TT: 17
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
	int n,m,i,j;
	char pres;
	cin>>n>>m>>pres;
	char a[n+5][m+5];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=n+1;i<=(n+3);i++)
	{
		for(j=n+1;j<=(n+3);j++)
		{
			a[i][j]='.';
		}
	}
	set <char> s;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i][j]==pres)
			{
				if(i>=2 && a[i-1][j]!=pres && a[i-1][j]!='.')
					s.insert(a[i-1][j]);
				if(i<= n-1 && a[i+1][j]!=pres && a[i+1][j]!='.')
					s.insert(a[i+1][j]);
				if(j>=2 && a[i][j-1]!=pres && a[i][j-1]!='.')
					s.insert(a[i][j-1]);
				if(j<=m-1 && a[i][j+1]!=pres && a[i][j+1]!='.')
					s.insert(a[i][j+1]);
			}

		}
	}
	
	cout<<s.size()<<endl;

  	return 0;
}

