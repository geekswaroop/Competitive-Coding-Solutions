#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    int ln,i;
    char a[100];
    gets(a);
    ln=strlen(a);
    sort(a,a+ln);
    for(i=ln/2;i<ln-1;i++)
    {
        cout<<a[i]<<"+";
    }
    cout<<a[ln-1];
    return 0;
}
