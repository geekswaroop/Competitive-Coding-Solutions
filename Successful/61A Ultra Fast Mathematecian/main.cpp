#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[101];
    char b[101];
    //char c[100];
    gets(a);
    gets(b);
    int ln=strlen(a);
    for(int i=0;i<ln;i++)
    {
        if(a[i]==b[i])
            a[i]='0';
        else
            a[i]='1';
    }
    for(int j=0;j<ln;j++)
    {
        cout<<a[j];
    }
    return 0;
}
/*#include<iostream>
 #include<cstring>
 using namespace std;

 int main()
 {
      char a[101],b[101];

      cin>>a;
      cin>>b;
      int i;
      for ( i=0; a[i]!='\0' && b[i]!='\0'; i++)
      {
          if ( a[i]==b[i]) cout<<"0";
          else cout<<"1";
      }

      return 0;
 }*/
