#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[1005];
    int value[200];
    fill(value,value+200,0);
    int k,ln,i,sum=0,temp;
    cin>>a;
    cin>>k;
    ln=strlen(a);
   /* for(i=0;i<200;i++)
    {
        cout<<value[i]<<" ";
    }*/
    for(i=0;i<26;i++)
    {
        cin>>temp;
        value[i+'a']=temp;
    }
    for(i=0;i<ln;i++)
    {
        sum+=value[a[i]]*(i+1);
    }
    int max=*max_element(value,value+200);
    sum+=(max*(k*ln+(k*(k+1)/2)));
    cout<<sum;
    /*for(i=0;i<ln;i++)
    {
        cout<<value[a[i]]<<" ";
    }*/
    return 0;
}
