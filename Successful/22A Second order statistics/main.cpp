#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int n,temp,i,temp1,temp2;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    temp1=(*min_element(v.begin(),v.end()));
    for(i=0;i<n;i++)
    {
        if (v[i]>temp1)
       { temp2=i;break;}
    }
    if(i==n)
        cout<<"NO";
    else
    cout<<v[temp2];
    return 0;
}
