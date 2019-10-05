#include <iostream>

using namespace std;

int main()
{
    long long k,n,w,ans;
    cin>>k>>n>>w;
    ans=(((k*w*(w+1))/2)-n);
    if(ans>0)
    cout<<((k*w*(w+1))/2)-n;
    else
        cout<<"0";
    return 0;
}
