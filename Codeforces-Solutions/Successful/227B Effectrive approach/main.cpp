/*#include <iostream>

using namespace std;

int main()
{
    int arr[100001];
    int n,i,j,k,m,b;
    long int vasya_sum=0;
    long int petya_sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    for(j=0;j<m;j++)
    {
        cin>>b;
        for(k=0;k<n;k++)
        {
            if(arr[k]==b)
                break;
        }
        vasya_sum+=(k+1);
        petya_sum+=(n-k);
        //cout<<(j+1)<<" "<<(n-j)<<endl;
    }
    cout<<vasya_sum<<" "<<petya_sum;
    return 0;
}*/
#include <cstdio>

int main()
{
    int n, a, index[100001];
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a);
        index[a] = i;
    }

    int m, b;
    scanf("%d", &m);
    long long Vasya(0), Petya(0);
    while (m--)
    {
        scanf("%d", &b);
        Vasya += index[b];
        Petya += (n + 1 - index[b]);
    }
    printf("%I64d %I64d\n", Vasya, Petya);
    return 0;
}
