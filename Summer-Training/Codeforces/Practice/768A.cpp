/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,i,cnt=0;
  cin>>n;
  long long a[n+5];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  for(i=1;i<n-1;i++)
  {
    if(a[i]>a[i-1] && a[i]<a[i+1])
    cnt++;
  }
  cout<<cnt<<endl;
}
*/
//read the question wrong.
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,i,cnt=0;
  cin>>n;
  long long a[n+5];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  long long mx,mn;
  mx=a[n-1];
  mn=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]>mn && a[i]<mx)
    cnt++;
  }
  cout<<cnt<<endl;
}
