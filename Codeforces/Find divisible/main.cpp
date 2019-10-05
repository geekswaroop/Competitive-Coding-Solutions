#include <iostream>

using namespace std;

int main()
{
    int t;
    long long l,r,i,ans;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        /*for(i=2;i<(l/r);i++)
        {
            if(i*l<r)
            {
               ans=i*l;break;
            }

        }*/
        cout<<l<<" "<<2*l<<endl;
    }
    return 0;
}
