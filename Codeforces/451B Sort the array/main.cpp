/*#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool isFirstGreater(int x, int y) {
    return x > y;
}
int main()
{
    int n,i,j,start,end;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(is_sorted(a,a+i+1))
            continue;
        else
        {
            start=i;
            break;
        }
    }
    for(j=i;j<n;j++)
    {
        if(is_sorted(a+i,a+j+1,isFirstGreater))
            continue;
        else
        {
            end=j;
            break;
        }
    }
    if(is_sorted(a+j,a+n))
    {
        cout<<"yes"<<endl;
        cout<<start<<" "<<end<<endl;
    }
    else
        cout<<"no"<<endl;
    return 0;
}*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, s(1), e(1);
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
        if (a[i] < a[i - 1])
        {
            s = i;
            break;
        }

    for (int i = n - 1; i >= 1; i--)
        if (a[i] < a[i - 1])
        {
            e = i + 1;
            break;
        }

    reverse(a + s - 1, a + e);

    if (is_sorted(a, a + n))
    {
        cout << "yes" << endl;
        cout << s << " " << e << endl;
    }
    else
        cout << "no" << endl;
    return 0;
}
