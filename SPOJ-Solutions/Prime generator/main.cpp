#include <iostream>

using namespace std;

int main()
{
    int t,flag;
    long long m,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(i=m;i<=n;i++)
        {   flag=1;
            for(j=2;j*j<=i;j++)
            {
                if(i%j==0)
                   {flag=0;
                    break;}

            }
            if(flag && i!=1)
                cout<<i<<endl;
        }

    }
    return 0;
}
