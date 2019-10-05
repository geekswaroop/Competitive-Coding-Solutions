#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,sum1=0,i,j,k,ans=0,arr[7];
    cin>>n;
    for(i=1;i<=7;i++)
    {
        cin>>arr[i];
       // sum+=arr[i];
    }
        for(j=1;j<=7;j++)
    {
        sum+=arr[j];
    }
        if(n>sum)
    {
        n=(n-(n/sum)*sum);
        if(n==0)
            ans=7;

            {
                for(k=1;k<=7;k++)
        {
            sum1+=arr[k];
            if(sum1>=n)
            {ans=k;break;}
        }
        }
    }
    else
    {
        for(k=1;k<=7;k++)
        {
            sum1+=arr[k];
            if(sum1>=n)
            {
                ans=k;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}
/*#include <iostream>

using namespace std;

int main()
{
    int n, y[8] = {0};
    cin >> n;
    for (int d = 1; d <= 7; ++d)
    {
        cin >> y[d];
        y[d] += y[d-1];
    }
    n = (n - 1) % y[7] + 1;
    for (int d = 1; d <= 7; ++d)
    {
        if (y[d] >= n)
        {
            cout << d << endl;
            break;
        }
    }
    return 0;
}*/
