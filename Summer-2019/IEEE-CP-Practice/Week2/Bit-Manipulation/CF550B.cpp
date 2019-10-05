		
/**
*	Name: K Krishna Swaroop (@geekswaroop, </www.geekswaroop.github.io>)
*	Institute: National Institute of Technology Karnataka Surathkal
Status: TLE
SC: 2
RT: 1
TT: 10
CT: 7
DT: 2.5
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

ll cnt=0,x,l,r,n;
void filternum(ll *a,ll no);

void genSubsets(ll *a,ll n)
{
	
	ll range=((1<<n)-1);
	for(ll i=0;i<=range;i++)
	{
		filternum(a,i);
	}
}
void filternum(ll *a,ll no)
{
	ll i=0;
	vector<long long> v;
	while(no>0)
	{
		if(no&1)
			v.push_back(a[i]);
		i++;
		no=no>>1;
	}
	sort(v.begin(),v.end());
	ll sum=std :: accumulate(v.begin(),v.end(),0);
	if(v[v.size()-1]-v[0] >x && (sum>=l && sum<=r))
		cnt++;

int main() {
	off;
	ll i;
	cin>>n>>l>>r>>x;
	ll a[n+5];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	genSubsets(a,n);
	cout<<cnt<<endl;

  	return 0;
}
}*/
		
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm, l, r, x;
    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    int mask = v.size();
    if (mask == 0) {
        cout << 0;
        return 0;
    }
    sort(v.begin(), v.end());
    int subsets = 1 << mask;
    vector<int> ans;
    int res = 0;
    for (int i = 1; i <= subsets; ++i) {
        ans.clear();
        for (int j = 0; j < mask; ++j) {
            if ((i & (1 << j)) != 0) {
                ans.push_back(v[j]);
            }
        }
        if (ans.size() >= 2 && ((ans[ans.size() - 1] - ans[0]) >= x)) {
            elm = accumulate(ans.begin(), ans.end(), 0);
            if (l <= elm && elm <= r)
                ++res;
        }

    }
    cout << res;
    return 0;
}

