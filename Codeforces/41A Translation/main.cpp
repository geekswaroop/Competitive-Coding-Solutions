#include <iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    if(a==b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
