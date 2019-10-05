//mistake made: didnt see whether the array contains all the other divisors. we checked only the last and the first
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,n,i;
  cin>>t;
  while(t--)

  {
    long long int ans=-1;
    cin>>n;
    long long int a[n+5];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    if(a[0]==2) ans=2*a[n-1];
    else
    {
      ans=a[n-1]*a[0];
    }
    cout<<ans<<endl;
  }
}*/
//solution checking the array permutation also
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {

		int n;
		cin >> n;
		vector<long long> d(n);
		for (int i = 0; i < n; ++i) {
			cin >> d[i];
		}
		sort(d.begin(), d.end());
		long long x = d[0] * d[n - 1];

		vector<long long> dd;
		for (int i = 2; i * 1ll * i <= x; ++i) {
			if (x % i == 0) {
				dd.push_back(i);
				if (i != x / i) {
					dd.push_back(x / i);
				}
			}
		}
		sort(dd.begin(), dd.end());

		if (dd == d) {
			cout << x << endl;
		} else {
			cout << -1 << endl;
		}
	}

	return 0;
}
