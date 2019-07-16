		
/**
*	Name: K Krishna Swaroop (@geekswaroop, </www.geekswaroop.github.io>)
*	Institute: National Institute of Technology Karnataka Surathkal
Status: WA
SC: 3
RT: 1
TT: 6
CT: 3.5
DT: 6
TT: 16
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
	int i,j;
	char a[10];
	cin>>a;
	int n=strlen(a);
	int final=((1<<n)-2);

	int mask=n;
	int subsets=1<<mask;
	for(int i=0;i<subsets;i++)
	{	char ans[n]={'0'};
		for(j=0;j<mask;j++)
		{
			if((i&(1<<j)) == 1<<j)
			{
				ans[n-1-j]='7';
				//cout<<"1";
			}
			else
				ans[j]='4';
				//cout<<"0";
		}
		if(strcmp(a,ans)==0)
		{
			final+=i;
			break;
		}
		else
			continue;
			//cout<<endl;
	}
	cout<<final+1<<endl;
	
	
  	return 0;
}*/


//brute force solution

		
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

vector<long long> v;
void brute(long long num)
{
	v.push_back(num);
	if (num > 1000000000)
		return;
	brute(num * 10 + 4);
	brute(num * 10 + 7);
}
int main()
{
	ios::sync_with_stdio(false);
	brute(0);
	sort(v.begin(), v.end());
	v.resize(unique(v.begin(), v.end()) - v.begin());
	int n;
	cin >> n;
	cout << lower_bound(v.begin(), v.end(), n) - v.begin() << endl;
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
	ll i,j,n,ans=0;
	string s;
	cin>>s;
	n=s.size();
	ll a[n+5];
	for(i=0;i<n;i++)
	{
		if(s[i]=='4')
			a[i]=0;
		else
			a[i]=7;
	}
	for(i=n-1;i>=0;i--)
	{
		if(a[i])
			ans+=(1<<(n-1-i));
	}
	cout<<ans+1<<endl;

  	return 0;
}