/*#include <iostream>
#include<stdio.h>
#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int test(int i,int j,int k);
int main()
{
    int n,k,l,c,d,p,nl,np;
    int booze,limes;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    booze=((k*l)/nl);
    limes=(c*d);
    int booze=1,limes=2,np=0;
    int ans=test(booze,limes,np);
    cout<<(ans);
    return 0;
}
int test(int i, int j, int k)
{
  return std::min(i, std::min(j, k));
}*/
#include <iostream>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k * l / nl, c * d), p / np) / n << endl;
    return 0;
}
