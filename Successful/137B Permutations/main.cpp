#include <iostream>

using namespace std;

int main()
{
    int sum=0,n,temp,i;
    int a[5001]={0};
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>temp;
        a[temp]++;
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
            sum++;

    }
    cout<<sum;
    return 0;
}
