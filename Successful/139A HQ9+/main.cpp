#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
   char a[100];
   gets(a);
   int ln;
   ln=strlen(a);
   int i,cn;
   cn=0;
   for(i=0;i<ln;i++)
   {
       if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        cn++;
   }
   if(cn>0)
    cout<<"YES";
   else
    cout<<"NO";

    return 0;
}
