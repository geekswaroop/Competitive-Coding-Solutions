#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char team[100];
    gets(team);
    int length=strlen(team);
    int i,a,b;
    a=0,b=0;
  for(i=0; i< length; i++){
        if(team[i]== '1'){
            a++;
            b=0;
        }
        else if(team[i]== '0'){
            b++;
            a=0;
        }
        if(a >= 7 || b >= 7)
            break;
    }

    if(a >= 7 || b >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
