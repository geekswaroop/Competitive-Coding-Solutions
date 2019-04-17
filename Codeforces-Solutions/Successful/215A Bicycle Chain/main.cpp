#include <iostream>

using namespace std;

int main()
{
    int mx=0,cn=0,m,n,i,j,a[50],b[50];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((b[i]/a[j]>mx) && b[i]%a[j]==0)
                mx=(b[i]/a[j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(mx==(b[i]/a[j]) && b[i]%a[j]==0)
                {cn++;}
        }
    }
    //cout<<mx;
    cout<<cn;
    return 0;
}
