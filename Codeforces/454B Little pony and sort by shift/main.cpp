/*#include <iostream>

using namespace std;

int main()
{
    int n,i,j,c=0,s;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]<a[i])
            {
                c++;
                s=i;
            }

    }
    if(a[n-1]>a[0])
    {
        s=n-1;
        c++;
    }
    if(c==0)cout<<"0";
    else if(c>1) cout<<"-1";
    else
        cout<<n-1-s;

    return 0;
}*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, s, v(0);
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) if (a[i] > a[i + 1]) s = i, v++;
    if (a[n - 1] > a[0]) s = n - 1, v++;
    if (v == 0) cout << 0 << endl;
    else if (v > 1) cout << -1 << endl;
    else cout << n - 1 - s << endl;
    return 0;
}
