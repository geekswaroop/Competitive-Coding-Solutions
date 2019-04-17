/*#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,ln;
    char a[6];
    char temp;
    cin>>a;
    ln=strlen(a);
    for(i=0;i<ln;i++)
    {
        if(((int)(a[i]-'0'))%2==0)
            break;
    }
    if(i!=ln)
    {
        a[i]=temp;
        a[i]=a[ln-1];
        a[ln-1]=temp;
        cout<<a;
    }
    else
        cout<<"-1";

    return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n(s.length() - 1), ind(n);

    for (int i = 0; i < n; i++)
        if ((s[i] - '0') % 2 == 0)
        {
            ind = i;
            if (s[n] > s[i])
                break;
        }

    if (n == ind)
        cout << -1 << endl;
    else
    {
        swap(s[ind], s[n]);
        cout << s << endl;
    }

    return 0;
}
