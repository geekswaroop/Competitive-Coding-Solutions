#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int phi(int n)
{
    float result = n; // Initialize result as n

    // Consider all prime factors of n and for every prime
    // factor p, multiply result with (1 - 1/p)
    for (int p = 2; p * p <= n; ++p) {

        // Check if p is a prime factor.
        if (n % p == 0) {

            // If yes, then update n and result
            while (n % p == 0)
                n /= p;
            result *= (1.0 - (1.0 / (float)p));
        }
    }

    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result *= (1.0 - (1.0 / (float)n));

    return (int)result;
}
int main()
{
    int t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=phi(n);
        cout<<ans<<endl;

    }
    return 0;
}
