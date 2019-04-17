#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,x,y,_x,_y;
    cin>>r>>x>>y>>_x>>_y;
    double dist=sqrt((int)(pow(x-_x,2)+0.5)+(int)(pow(y-_y,2.0)+0.5));
    int ans=(int)ceil(dist/r/2);
   /*if((int)dist%(2*r)==0 && (dist-(int)dist)<1e-6)
        cout<<ans;
    else
        cout<<ans+1;*/
        cout<<ans;
    return 0;
}
