#include <iostream>

using namespace std;

int main()
{
    int sx=0,sy=0,sz=0,n,i;
    int x[100],y[100],z[100];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }
    for(i=1;i<=n;i++)
    {
        sx+=x[i];
        sy+=y[i];
        sz+=z[i];
    }
    if((sx==0)&&(sy==0)&&(sz==0))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
