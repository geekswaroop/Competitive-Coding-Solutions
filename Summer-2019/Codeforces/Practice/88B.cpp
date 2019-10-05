		
/**
*	Name: K Krishna Swaroop (@geekswaroop, </www.geekswaroop.github.io>)
*	Institute: National Institute of Technology Karnataka Surathkal
Status: WA
SC: 2
RT: 1.5
TT: 5
CT: 8
DT: 6
TT: 20.5
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
	int n,m,x,i,j,k;
	cin>>n>>m>>x;
	char a[n+5][m+5];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	vector<pair<int,int > >S;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]=='S')
				S.push_back(std :: make_pair(j,i));
		}
	}
	vector<char>shiftable;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<S.size();k++)
			{
				if(abs(S[k].first-j)+abs(S[k].second-i) <= x)
					shiftable.push_back(a[i][j]);
			}
		}
	}
	int q,cnt=0;
	cin>>q;
	string txt;
	cin>>txt;

	for(i=0;i<q;i++)
	{	//vector< pair<int,int> > :: iterator it;
		vector < pair<int,int> > ::const_iterator it
		it = std::find (shiftable.begin(),shiftable.end(),txt[i]);
		if(it!=shiftable.end())
		{
			continue;
		}
		else
			cnt++;
	}
	cout<<cnt<<endl;
  	return 0;
}
*/

#include<stdio.h>
#include<string.h>
int can[30],canb[30];
char in[33][33];
char tmp[500010];
int main(){
    int n,m,i,j,k,l;
    int x;
    scanf("%d%d%d",&n,&m,&x);
    for(i=0;i<n;i++)scanf("%s",in[i]);
    bool hass=0;
    for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	    if(in[i][j]=='S'){
		hass=1;
		for(k=0;k<n;k++){
		    for(l=0;l<m;l++){
			if((k-i)*(k-i)+(l-j)*(l-j)<=x*x&&in[k][l]!='S'){
			    canb[in[k][l]-'a']=1;
			}
		    }
		}
	    }else{
		can[in[i][j]-'a']=1;
	    }
	}
    }
    int q;
    scanf("%d%s",&q,tmp);
    int ans=0;
    for(i=0;i<q;i++){
	if(tmp[i]>='A'&&tmp[i]<='Z'){
	    if(!hass)break;
	    if(canb[tmp[i]-'A']){
	    }else if(can[tmp[i]-'A']){
		ans++;
	    }else break;
	}else{
	    if(can[tmp[i]-'a']){
	    }else break;
	}
    }
    if(i<q)puts("-1");
    else printf("%d\n",ans);
}