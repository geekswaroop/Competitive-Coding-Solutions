#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin>>q;
  int a[1000];
  int n=1000;
  memset(a,0,1000);
  while(q--)
  {
    int choice;
    cin>>choice;
    switch(choice)
    {
      case 1:
      {
        int temp1,temp2;
        cin>>temp1>>temp2;
        a[temp1]=temp2;
        break;
      }
      case 2:
      {
        sort(a,a+n);
        break;
      }

      case 3:
      {
        int temp;
        cin>>temp;
        int *p;
        p = lower_bound(a,a+n,temp);
        cout<<p-a<<endl;
        break;
      }

      case 4:
      {
        //same with upperbound

        break;
      }

      case 5:
      {
        next_permutation(a,a+n);
        break;
      }
      case 6:
      {
        prev_permutation(a,a+n);
        break;
      }

    }

  }
}



  //printing lower bound of x;
      int *p;
        p = lower_bound(a,a+n,temp);
        cout<<p-a<<endl;
  //printing upperbound of x;
        int *p;
        p = upper_bound(a,a+n,temp);
        cout<<p-a<<endl;
  //update array to next/previous permutation
        next_permutation(a,a+n);
