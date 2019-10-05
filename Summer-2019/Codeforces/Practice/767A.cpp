/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,temp;
  cin>>n;
  int m = n;
  int a[n+5];
  for(i=0;i<n;i++)
  {
    cin>>temp;
    a[temp]=1;
    while(a[m]==1)
    {
      cout<<m<<" ";
      m--;
    }
    cout<<endl;
  }
}
*/
#include <bits/stdc++.h>
using namespace std;
const int N=100020;
int a[N]={0};
int main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        a[p]=1;
        while(a[m]==1)
        {
            printf("%d ",m);
            m--;
        }
        printf("\n");
    }
    return 0;
}
