/*#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    int a[101];
    cin>>n;
    if(n%2!=0)
        cout<<"-1";
    else
    {
        for(i=1;i<=n;i++)
        {
            if(i%2==1)
                a[i]=2*i;
            else
                a[i]=(2*i-1);
        }
        for(i=1;i<=n;i++)
            cout<<a[i];
    }
    return 0;

}*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        //cout << "2 1";
        for (int i = 1; i < n; i += 2)
        {
            cout << " " << i + 1 << " " << i;
        }
        cout << endl;
    }
    return 0;
}
