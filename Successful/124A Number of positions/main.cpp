#include <iostream>

using namespace std;

int main()
{
    int a,n,b,mx;
    cin>>n>>a>>b;
    if((a+1)>(n-b))
        mx=(a+1);
    else
        mx=(n-b);
    cout<<(n-mx+1);

    return 0;
}
