		
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
	long long t,str,exp,it,ans;
	cin>>t;
	while(t--)
	{
		cin>>str>>it>>exp;
		ans = str+exp-it;
		if(ans<=0)
		{
			cout<<0<<endl;
			continue;
		}
		if(exp ==0 && ans>0)
		{
			cout<<1<<endl;
			continue;
		}
		if(ans%2==0)
		{   //cout<<ans<<endl;
			cout<<(ans/2)<<endl;
			continue;
		}
		if(ans%2)
		{
		    cout<<(ans/2)+1<<endl;
		}
		
    //cout<<endl;
		
	}

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
	long long t,str,exp,it,ans;
	cin>>t;
	while(t--)
	{	
		long long cnt = 0;
		cin>>str>>it>>exp;
		str = str+exp;
		while(str>it && str && it)
		{
			it++;
			str--;
			cnt++;
		}
		cout<<cnt<<endl;
	}

  	return 0;
}*/
		
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

void solve()
{
	int str,it,exp;
	cin>>str>>it>>exp;
	int temp = (it+exp-str+2)/2;
	int minAddStr = max(0,temp);
	int ans = max(0,(exp-minAddStr+1));
	cout<<ans<<endl;
}
void solve1()
{
	int str,it,exp;
	cin>>str>>it>>exp;
	int temp = ceil((it+exp-str-1)/2);
	int minAddI = max(0,temp);
	int ans = max(0,minAddI+1);
	cout<<ans<<endl;
}
int main() {
	off;
	int t;
	cin>>t;
	while(t--)
	{
		solve1();
	}

  	return 0;
}