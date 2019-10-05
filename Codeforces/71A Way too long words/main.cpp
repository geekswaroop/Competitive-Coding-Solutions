#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,i,ln;
   cin>>n;
   char s[100];
   for(i=0;i<=n;i++)
   {
       gets(s);
       ln=strlen(s);
       if(ln<=10)
        puts(s);
       else
        cout<<s[0]<<(ln-2)<<s[(ln-1)]<<endl;
    }
    return 0;
}
