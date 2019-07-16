#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    int t,i;
    cin>>t;
    pair<int,int>p[1000];
    memset(p,0,sizeof(p));
    while(t--)
  {
    int choice;
    cin>>choice;
    switch(choice)
    {
      case 1:
      {
        int x,y,z;
        cin>>x>>y>>z;
        p[x].first=y;
        p[x].second=z;
        break;
      }
      case 2:
      {
        int temp;
        cin>>temp;
        if(temp==1)
        {
          sort(p,p+10);
        }
        else
        {
          sort(p,p+10,sortbysec);
        }
        break;
      }
      case 3:
      {
        for(i=0;i<10;i++)
        {
          cout<<p[i].first<<" "<<p[i].second<<endl;
        }
        break;
      }
    }
  }
}
/*
Test Cases:
1 0 2 3
1 1 4 5
1 2 6 7
1 3 8 9
1 4 10 11
1 5 12 13
1 6 14 15
1 7 16 17
1 8 18 19
1 9 20 21
2 1
3
2 2
3
*/

pair<int,int>p[1000];

//set element at x to (y,z)
p[x].first=y;
p[x].second=z;

//sort by pref to first
sort(p,p+10);
//sort with pref to second
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
sort(p,p+10,sortbysec);
