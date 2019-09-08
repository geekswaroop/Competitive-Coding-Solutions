#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cn=0,i,j=0,key;
    char b[200];
    char s[200];
    gets(s);
    int ln=strlen(s);
    for(i=0;i<ln;i++)
    {
        if(s[i]=='-'&&s[i+1]=='-')
           {
            key='2';

            b[j++]=key;
            i=i+1;
            cn++;
            continue;

           }
        if(s[i]=='.')
                {   key='0';
                b[j++]=key;
                cn++;}
        if(s[i]=='-'&&s[i+1]=='.')
           {
            key='1';
            b[j++]=key;
            i=i+1;
            cn++;
            continue;
           }



    }
    for(i=0;i<j;i++)
    {
        cout<<b[i];
    }
   // puts(b);
    return 0;
}
