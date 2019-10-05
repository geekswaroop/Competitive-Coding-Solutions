/*#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b,ans;
    cin>>n>>m>>a>>b;
    if(m<n)
        cout<<min(n*a,(n-m)*a+b);
    else
    {
        if(b<(n*a))
            cout<<b;
        else
            cout<<n*a;
    }
    return 0;
}*/
#include <cstdio>
#include<iostream>
using namespace std;

int main()
{
    int n, m, a, b;
    scanf("%d%d%d%d", &n, &m, &a, &b);

    if(m * a > b)
    {
        int remain = (n % m) * a;
        if(remain > b)
            printf("%d\n", n / m * b + b);
        else
            printf("%d\n", n / m * b + remain);
    }
    else
        printf("%d\n", n * a);

    return 0;
}
