#include <iostream>

using namespace std;

int main()
{
    int i,n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(i=0;i<n/2;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        cout<<n/2<<endl;
        for(i=0;i<(n/2-1);i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
    return 0;
}
