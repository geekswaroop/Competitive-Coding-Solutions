#include <iostream>

using namespace std;

int main()
{
    long long n;
    int ans;
    cin>>n;
    if(n%5==0)
        ans=n/5;
    else
        ans=(n/5+1);
    cout<<ans;
    return 0;
}
