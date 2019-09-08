#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    int i,j,ans;
    int t1=0;
    int t2=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]!=0)
            {
                t1=(i+1);
                t2=(j+1);
            }
        }
    }
    ans=(abs(t1-3)+abs(t2-3));
    cout<<ans;
    return 0;
}
