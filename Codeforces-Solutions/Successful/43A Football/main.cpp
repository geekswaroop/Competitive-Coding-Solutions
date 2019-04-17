#include <iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    string s1,s2,temp;
    int n,c1=1,c2=0;
    cin>>n;
    cin>> s1;
    for(int i=0;i<(n-1);i++)
    {
        cin>>temp;
        if(temp==s1)
            c1++;
        else
        {
          s2=temp;

        }
    }
    if(c1>(n-c1))
       cout<<s1;
    else
        cout<<s2;

    return 0;
}
