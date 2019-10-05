#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    char a[1005];
    int value[26];
    fill(value,value+27,0);
    gets(a);
    int ln=strlen(a);
    /*for(i=0;i<ln;i++)
    {
        cout<<a[i];
    }
    cout<<ln;*/
    for(i=0;i<ln;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            value[a[i]-'a']++;
        }

    }
    int zeroes=count(value,value+26,0);
    /*for(i=0;i<26;i++)
    {
        cout<<value[i]<<" ";
    }*/
    cout<<26-zeroes;
    return 0;
}
