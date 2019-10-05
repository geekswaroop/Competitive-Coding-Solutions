#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int cn=0,i;
   char a[1000];
   cin>>a;
   int ln=strlen(a);
   sort(a,a+ln);
   for(i=0;i<ln;i++)
   {
       while(a[i]==a[i+1])
        i++;
       if(a[i]!=a[i+1])
        cn++;
   }
   if(cn%2==0)

   {
       cout<<"CHAT WITH HER!";
   }
   else
    cout<<"IGNORE HIM!";
    return 0;
}
