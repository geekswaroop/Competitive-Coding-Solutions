#include <iostream>

using namespace std;
long long N=1e9+7;
int main()
{
    long long x,y,n;
    cin>>x>>y;
    cin>>n;
    if(n%6==0) cout<<((x-y)%N+N)%N;
    if(n%6==1) cout<<(x%N+N)%N;
    if(n%6==2) cout<<(y%N+N)%N;
    if(n%6==3) cout<<((y-x)%N+N)%N;
    if(n%6==4) cout<<((-x)%N+N)%N;
    if(n%6==5) cout<<((-y)%N+N)%N;

    return 0;
}
