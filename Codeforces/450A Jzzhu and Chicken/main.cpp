/*#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int largest(int arr[], int n)
{
    return *max_element(arr, arr+n);
}

int main()
{
    int i,n,m,j,k;
    int mx,ans1,ans2;
    int arr[101];
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    mx=largest(arr,n);
    for(i=n;i>=1;i--)
    {
        if(arr[i]==mx)
        {ans2=i;
        break;}
    }
    int t=(mx/n);
    while(t--)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[j]==0)
                continue;
            else if(arr[j]<m)
                arr[j]=0;
            else
                arr[i]=(arr[i]-m);
        }
    }
    for(i=n;i>=1;i--)
    {
        if(arr[i]!=0)
        {ans1=i;
        break;}
    }
    if(mx<=m)
    cout<<ans2;
    else
    cout<<ans1;
    return 0;
}
*/
#include <iostream>
#include <vector>
using namespace std;
vector <pair<int, int>> v;
int n, m, j = 0, k = 0, a, l;
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(make_pair(a, i));
    }
    while (n + j > k) {
        if (v[k].first > m) {
            v.push_back(make_pair(v[k].first - m, v[k].second));
            j++;
        } else {
            l = v[k].second + 1;
        }
        k++;
    }
    cout << l;
}
