#include <iostream>

using namespace std;

int main()
{   int n,m,x;
    cin>>n>>m;
    x=(2*n-m*((2*n)/m));
    if(x<0)
        cout<<"-1";
    else
        cout<<(n+x)/2;
    return 0;
}
