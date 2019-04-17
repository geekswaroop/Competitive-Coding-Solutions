#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    gets(s);
    if(s[0]>=65&&s[0]<=90)
        puts(s);
    else
       {

        s[0]=(s[0]-32);
    puts(s);
       }
    return 0;
}
