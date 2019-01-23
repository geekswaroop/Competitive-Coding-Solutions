#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    gets(s);
    int cn_l=0;
    int cn_u=0;
    int ln =strlen(s);
    for(int i=0;i<ln;i++)
    {
        if((s[i]>=97)&&(s[i]<=122))
            cn_l++;
        else
            cn_u++;
    }
    if(cn_l>cn_u)
    {
        for(int j=0;j<ln;j++)
        {
            if((s[j]>=65)&&(s[j]<=90))
                s[j]=s[j]+32;
        }
    }
    if(cn_u>cn_l)
    {
        for(int k=0;k<ln;k++)
        {
            if((s[k]>=97)&&(s[k]<=122))
                s[k]=s[k]-32;

        }
    }
    if(cn_u==cn_l)
    {
        for(int z=0;z<ln;z++)
        {
            if((s[z]>=65&&s[z]<=90))
                s[z]=s[z]+32;
        }
    }
    puts(s);
    return 0;
}
