#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3,s4;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    s4=(s1+s2);
    int ln1=s4.length();
    int ln2=s3.length();
    //cout<<ln1<<ln2;
    sort(s4.begin(),s4.end());
    sort(s3.begin(),s3.end());
    if(s3==s4)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
