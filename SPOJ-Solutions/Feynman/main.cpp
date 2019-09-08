#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            exit(0);
        else
        cout<<(n*(n+1)*(2*n+1))/6<<endl;

    }
    return 0;
}
