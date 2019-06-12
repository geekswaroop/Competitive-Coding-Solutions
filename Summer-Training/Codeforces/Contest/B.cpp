		
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
	int h,w,c_x,c_y,i,j,k,flag=0;
	cin>>h>>w;
	char a[h+5][w+5];
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=w;j++)
		{
			cin>>a[i][j];
		}
	}
    if(h%2==0)
    {
        c_y=h/2;
    }
    else
    	c_y=h/2+1;

    if(w%2==0)
    {
        c_x=w/2;
    }
    else
    	c_x=w/2+1;
    
   // cout<<c_y<<" "<<c_x<<endl;
    if(c_y-1 > 0 && c_x-1 > 0 )
	{if(a[c_y][c_x]=='*' && a[c_y-1][c_x]=='*' && a[c_y+1][c_x]=='*' && a[c_y][c_x-1]=='*' && a[c_y][c_x+1]=='*' )
	{
		for(i=1;i<=h;i++)
		{
			for(j=1;j<=w;j++)
			{
				if(i==c_y) break;
				if(j==c_x) continue;

				if(a[i][j]=='*')
				{
					flag=1;
					break;
				}
			}
			if(flag) 
				break;
		}
		if(flag==1) 
			{cout<<"NO"<<endl; return 0;}
		else
		{
			cout<<"YES"<<endl;
			return 0;
		}

		//cout<<"YES"<<endl;
	}
}
	else
		cout<<"NO"<<endl;

	

    //cout<<a[c_y][c_x]<< a[c_y-1][c_x]<< a[c_y+1][c_x]<<a[c_y][c_x-1]<<a[c_y][c_x+1]<<endl;


  	return 0;
}