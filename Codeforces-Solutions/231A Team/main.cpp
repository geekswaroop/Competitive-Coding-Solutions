#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,i,cn=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2)
            cn++;
    }
    cout<<cn;
    return 0;
}
