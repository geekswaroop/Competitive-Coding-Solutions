		
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
	ll n,m,k,i,j,temp;
	cin>>n>>m>>k;
	ll hole[m+5]={0};
	for(i=0;i<m;i++)
	{
		cin>>temp;
		hole[temp]=1;
	}
	ll swap[k+5][2];
	for(i=0;i<k;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>swap[i][j];
		}
	}
	ll bone=1;
	int fallen=0;
	for(i=0;i<k;i++)
	{
		for(j=0;j<2;j++)
		{
			if(swap[i][0]==bone)
			{
				bone=swap[i][1];
				if(hole[bone]==1)
				{
					fallen=1;
					break;
				}
			}
			else if(swap[i][1]==bone)
			{	
				
						bone=swap[i][0];
						if(hole[bone]==1)
						{
							fallen=1;
							break;
						}
					

			}
			else 
				continue;		
		}
		if(fallen)
			break;
	}
	cout<<bone<<endl;
	

  	return 0;
} */

#include <stdio.h>
 
int isHole[1000005];
 
int main(){
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for(int i=0; i<m; i++){
        int h;
        scanf("%d", &h);
        isHole[h] = 1;
    }
    int pos = 1;
    for(int i=0; i<k; i++){
        int u, v;
        scanf("%d%d", &u, &v);
        if(u == pos && (!isHole[u])) pos = v;
        else if(v == pos && (!isHole[v])) pos = u;
    }
    printf("%d", pos);
    return 0;
}