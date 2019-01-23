#include <iostream>

using namespace std;

int main()
{
    int cn=0,n,sum=0,i,j,k;
    int a[101];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<n;j++)
    {
        sum+=a[j];

    }
    if((sum+1)%(n+1)!=1)
        cn++;
    if((sum+2)%(n+1)!=1)
        cn++;
    if((sum+3)%(n+1)!=1)
        cn++;
    if((sum+4)%(n+1)!=1)
        cn++;
    if((sum+5)%(n+1)!=1)
        cn++;
    cout<<cn;
    return 0;
}
