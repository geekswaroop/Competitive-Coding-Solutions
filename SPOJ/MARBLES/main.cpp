/*#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
    long long res = 1;
    for (long long i = 2; i <= n; i++)
        res = res * i;
    return res;
}

long long nCr(long long n, long long r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}

// Returns factorial of n

int main()
{
   long long t,n,k;
   cin>>t;
   while(t--)
   {
       cin>>n>>k;
       //long long ans= nCr(n-1,k-1);
       printf("%lld\n",nCr(n-1,k-1));
   }
    return 0;
}*/
#include <cstdio>

using namespace std;

long long C(int n, int m){
    if(m>n-m) m=n-m;

    long long ans=1;

    for(int i=0;i<m;i++) ans=ans*(n-i)/(i+1);

    return ans;
}

int main(){
    int T,n,k;

    scanf("%d",&T);

    for(int tc=1;tc<=T;tc++){
        scanf("%d %d",&n,&k);
        printf("%lld\n",C(n-1,k-1));
    }

    return 0;
}
