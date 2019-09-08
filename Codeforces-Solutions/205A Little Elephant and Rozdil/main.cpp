/*#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,index[100001],i;
    long long int t[100001];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>t[i];
        index[t[i]]=i;
    }
    sort(t,t+n);
    if(t[1]==t[2])
        cout<<"Still Rozdil";
    else
        cout<<index[t[1]];
    return 0;
}
*/
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int min_time=(1000000001);
    int min_index,cnt,n,temp;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>temp;
        if(temp<min_time)
        {   min_time=temp;
            min_index=i;
            cnt=1;
        }
        else if(temp==min_time)
            cnt++;
    }
    if(cnt==1)
        cout<<min_index;
    else
        cout<<"Still Rozdil";
    return 0;
}
