#include <iostream>

using namespace std;

int main()
{
    int a,b,m=0,c=0,n;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        c-=a;
        c+=b;
        if(c>m)
        {
            m=c;
        }
    }
    cout<<m;
    return 0;
}
