/*#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,string>mp1;
    map<string,int>mp2;
    int n,m;
    string s1,s2;
    cin>>n>>m;
    while(m--)
    {
        cin>>s1>>s2;
        mp1[s1]=s2;
        mp1[s2]=s1;
        mp2[s1]=1;
        mp2[s2]=2;
    }
    while(n--)
    {
        cin>>s1;
        if(mp1[s1].size() < s1.size())
            cout<<mp1[s1]<<" ";
        else if(mp1[s1].size()>s1.size())
            cout<<s1<<" ";
        else if(mp2[s1]==1)
            cout<<mp1[s1]<<" ";
        else
            cout<<s1<<" ";
    }
    return 0;
}*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,string>mp1;
    map<string,int>mp2;
    int n,m;
    string s1,s2;
    cin>>n>>m;
    while(m--)
    {
        cin>>s1>>s2;
        mp1[s1]=s2;
        mp1[s2]=s1;
        mp2[s1]=1;
        mp2[s2]=2;
    }
    while(n--)
    {
        cin>>s1;
        if(mp1[s1].size() < s1.size())
            cout<<mp1[s1]<<" ";
        else if(mp1[s1].size()>s1.size())
            cout<<s1<<" ";
        else if(mp2[s1]==1)
            cout<<s1<<" ";
        else
            cout<<mp1[s1]<<" ";
    }
    return 0;
}

