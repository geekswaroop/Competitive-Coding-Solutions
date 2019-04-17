#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j=1;
    char a[101];
    vector<char>v;
    cin>>t;
    cin>>a;
    for(i=0;i<t;i+=j)
    {
        v.push_back(a[i]);
        j++;
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    return 0;
}
