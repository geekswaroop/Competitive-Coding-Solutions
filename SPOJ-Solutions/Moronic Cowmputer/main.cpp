#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s="";

        if(n==0)
        {

            cout<<"0";
        return 0;}
        int i=-2;
    while(n)
    {
        if(n%i<0)
             {

             s=(char)(((n%i)+2)+'0')+s;   // When the remainder is negative
             n=(n/i)+1;                    // adding one so that when divided remainder is > 0
             }
             else
             {
             s=(char)((n%i)+'0')+s;
             n=n/i;
             }



    }
    cout<<s;


    return 0;
}
