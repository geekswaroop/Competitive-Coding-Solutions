//solution during contest(not submitted)
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i;
  cin>>n;
  int a[n+5];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  int k=0,cnt=0;
  for(i=1;i<=n;i++)
  {
    if(k<n)
    {
      if(i>= a[k])
      {
        cnt++;k++;
      }
      else
      {
        k++;i--;
      }
    }
    else
      break;
  }
  cout<<cnt<<endl;

}*/

//upsolved from tutorial
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,pos=1,i;
  cin>>n;
  int a[n+5];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);

  for(i=0;i<n;i++)
  {
    if(a[i]>= pos)
    {
      pos++;
    }

  }
  cout<<pos-1<<endl;
}
