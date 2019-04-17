#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cn=0,i,n;
    char s[50];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
            cn++;
    }
    cout<<cn;
    return 0;
}
