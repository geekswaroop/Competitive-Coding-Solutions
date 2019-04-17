/*#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,a[12],sum=0,i;
    cin>>k;
    for(i=1;i<=12;i++)
    {
        cin>>a[i];
    }
    sort(a,a+12);
    for(i=12;i>=1;i--)
    {
        //sum+=a[i];
        if(sum>=k)
            break;
        else
            sum+=a[i];
    }
 //   if(k!=0)
    cout<<(13-i);

    return 0;
}*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int k, a[12], total(0);
    cin >> k;
    for (size_t i = 0; i < 12; ++i)
    {
        cin >> a[i];
        total += a[i];
    }

    if (total < k)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(a, a + sizeof(a) / sizeof(a[0]), greater<int>());
        int sum = 0;
        int month = 0;
        while (sum < k)
        {
            sum += a[month];
            month += 1;
        }
        cout << month << endl;
    }

    return 0;
}
