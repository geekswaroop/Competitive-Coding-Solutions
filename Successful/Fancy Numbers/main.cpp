#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ln,i,j,c;
    char a[50];
    long long ans;
    cin>>t;
    while(t--)
    {   ans=1;
        cin>>a;
        ln=strlen(a);
        for(i=0;i<ln;i++)
        {   c=0;
            while(a[i+1]==a[i])
            {
                c++;
                i++;
            }
            ans*=pow(2,c);
        }
        cout<<ans<<endl;
    }
    return 0;
}
