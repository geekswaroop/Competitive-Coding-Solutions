#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2,dist;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
    {
        dist=abs(y2-y1);
        cout<<x1+dist<<" "<<y1<<" "<<x1+dist<<" "<<y2;
    }
    else if(y1==y2)
    {
        dist=abs(x2-x1);
        cout<<x1<<" "<<y1+dist<<" "<<x2<<" "<<y2+dist;

    }
    else if(abs(x1-x2)==abs(y2-y1))
    {
        cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2;
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}
