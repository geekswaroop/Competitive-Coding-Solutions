#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n,i,j,temp1,temp2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp1;
        v.push_back(temp1);
    }
    sort(v.begin(),v.end());
    temp1=v[0];
    temp2=v[n-1];
    vector<int>::iterator it;
    it=v.begin();
    v.erase(it);
    int t1=v[n-2]-v[0];
    v.push_back(temp1);
    sort(v.begin(),v.end());
    vector<int>::iterator it2;
    it2=(v.end()-1);
    v.erase(it2);
    int t2=v[n-2]-v[0];
    if(t1>t2)
        cout<<t2;
    else
        cout<<t1;
        //cout<<temp1<<" "<<temp2;
    /*for(i=0;i<n-1;i++)
    {
        cout<<v[i];
        //cout<<a[i];
    }*/
    return 0;
}
