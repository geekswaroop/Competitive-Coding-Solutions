		
/**
*	Name: K Krishna Swaroop (@geekswaroop, </www.geekswaroop.github.io>)
*	Institute: National Institute of Technology Karnataka Surathkal
Status: AC
SC: 5
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
	int n;
	char t;
	cin>>n;
	int op1=1023;
	int op0=0;
	
	for(int i=0;i<n;i++)
	{	char choice;
		int num;
		cin>>choice>>num;
		if(choice=='|')
		{
			op1|=num;
			op0|=num;
		}
		if(choice=='&')
		{
			op1&=num;
			op0&=num;
		}
		if(choice=='^')
		{
			op1^=num;
			op0^=num;
		}
	}
	int xornum= ~op1;
	int ornum=~(op1^op0);

	xornum&=1023;
	ornum&=1023;

	cout<<"2"<<endl;
	cout<<"| "<<ornum<<endl;
	cout<<"^ "<<xornum<<endl;

  	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	int ax=1023,in=0;
	for(int i=0;i<n;i++)
	{
		char op;
		int num;
		cin>>op>>num;

		if(op=='|')
		{
			ax|=num;
			in|=num;
		}
		if(op=='^')
		{
			ax^=num;
			in^=num;
		}
		if(op=='&')
		{
			ax&=num;
			in&=num;
		}
	}

	int xornum=~ax;
	int ornum=~(ax^in);

	xornum&=1023;
	ornum&=1023;

	cout<<2<<'\n';
	cout<<"| " <<ornum<<'\n';
	cout<<"^ "<<xornum;
	return 0;
}*/