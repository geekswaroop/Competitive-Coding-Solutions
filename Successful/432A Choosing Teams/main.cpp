#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n,k,i,c1,c2,c3,c4,c5,c0,temp;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    //sort(v.begin(),v.end());
    c0=count(v.begin(),v.end(),0);
    c1=count(v.begin(),v.end(),1);
    c2=count(v.begin(),v.end(),2);
    c3=count(v.begin(),v.end(),3);
    c4=count(v.begin(),v.end(),4);
    switch(k)
    {
        case 1: cout<<(c0+c1+c2+c3+c4)/3;
                break;
        case 2: cout<<(c0+c1+c2+c3)/3;
                break;
        case 3: cout<<(c0+c1+c2)/3;
                break;
        case 4: cout<<(c0+c1)/3;
                break;
        case 5: cout<<c0/3;
                break;
    }
    return 0;
}
