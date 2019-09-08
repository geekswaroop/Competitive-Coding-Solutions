/*#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    int t,n,i,x,y,cnt,cnt2,index,temp;
    cin>>t;
    while(t--)
    {   cnt=1;
        cin>>n;
        vector< pair <int,int> >v;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }

        sort(v.begin(),v.end(),sortbysec);
        /*for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << v[i].first << " "
             << v[i].second << endl;
    }*/
  /*  for(i=0;i<n-1;i++)
    {   int temp=v[i].second;
        cnt2=1;index=i;
        while(v[i+1].second==temp && i<n-1)
        {//if(v[i+1].second==temp)
            //sort(v.begin()+i,v.begin()+i+2);
            cnt2++;i++;}
            sort(v.begin()+index,v.begin()+index+cnt2);

    }
        for(i=1;i<n;i++)
        {   //if(v[i].second>v[i-1].second && v[i+1].second==v[i].second && i<n-1)
              //  temp=i-1;
              int end=v[i-1].second;
            if(v[i].first>end)
            {   //temp=i-1;
                cnt++;
            }
        }
        cout<<cnt<<endl;
        /*for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << v[i].first << " "
             << v[i].second << endl;
    }*/
   /* }
    return 0;
}
*/
//giving up on my tedious implementation. Mastery over comparator function not yet gained :(
//solution code
#include<stdio.h>
#include<iostream>
#include<algorithm>
struct activity
{
	int first,second;
}act[100000];
bool val(struct activity a,struct activity b)
{
	if (a.second == b.second)
		return a.first<b.first;
	return a.second<b.second;
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,end=-1,count=0,i;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d%d",&act[i].first,&act[i].second);
		std::sort(act,act+n,val);
		for(i=0;i<n;i++)
		{
			if(act[i].first>=end)
			{
				count += 1;
				end = act[i].second;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
