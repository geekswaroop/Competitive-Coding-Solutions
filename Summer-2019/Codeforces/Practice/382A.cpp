		
/**
*	Name: K Krishna Swaroop (@geekswaroop, </www.geekswaroop.github.io>)
*	Institute: National Institute of Technology Karnataka Surathkal
Status: WA
SC: 2
RT: 1
TT: 3.5
CT: 2.5
DT: 1
TT: 8
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
	int sl=0,sr=0,i,j,k;
	string s1,s2;
	cin>>s1;
	int tot=s1.size();
	for(i=0;i<s1.size();i++)
	{
		if(s1[i]!='|')
			sl++;
		else
			break;
	}
	sr=tot-sl-1;
	cin>>s2;
	if(abs(sl-sr)!=s2.size() || ())
	{
		cout<<"Impossible"<<endl;
	}
	else
	{

		if(sl<sr)
		{
			string ans;
			ans=s2+s1;
			cout<<ans<<endl;
		}
		else
		{
			string ans;
			ans=s1+s2;
			cout<<ans<<endl;
		}
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
	int sl=0,sr=0,i,j,k;
	string s1,s2,a1,a2;
	cin>>s1;
	int tot=s1.size();
	for(i=0;i<s1.size();i++)
	{
		if(s1[i]!='|')
			a1+=s1[i];
		else
		{	i++;
			break;
		}
	}
	for(j=i;j<s1.size();j++)
	{
		a2+=s1[j];
	}
	cin>>s2;
	for(i=0;i<s2.size();i++)
	{
		if(a1.size() > a2.size())
		{
			a2+=s2[i];
		}
		else
			a1+=s2[i];
	}
	if(a2.size()==a1.size())
	{
		string ans=a1+"|"+a2;
		cout<<ans<<endl;
	}
	else
		cout<<"Impossible"<<endl;
	

  	return 0;
}