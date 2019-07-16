/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,intro=0,extro=0,x;
  string s;
  vector<pair<int,int> >p;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    cin>>x;
    p.push_back(make_pair(x,i));
  }
  sort(p.begin(),p.end());
  cin>>s;
  for(i=0;i<s.size();i++)
  {
    if(s[i]=='0')
    {
      cout<<p[intro].second<<" ";

      extro=intro;
      intro++;
      //cout<<intro<<" "<<extro<<endl;
    }
    else
    {
      cout<<p[extro].second<<" ";
      extro--;
    //cout<<intro<<" "<<extro<<endl;

    }
  }
}*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,intro=0,extro=0,x;
  string s;
  vector<pair<int,int> >p;
  cin>>n;
  stack<int>st;
  for(i=1;i<=n;i++)
  {
    cin>>x;
    p.push_back(make_pair(x,i));
  }
  sort(p.begin(),p.end());
  cin>>s;
  for(i=0;i<s.size();i++)
  {
    if(s[i]=='0')
    {
      cout<<p[intro].second<<" ";
      st.push(p[intro].second);
      intro++;
      //cout<<intro<<" "<<extro<<endl;
    }
    else
    {
      cout<<st.top()<<" ";
      st.pop();
    //cout<<intro<<" "<<extro<<endl;

    }
  }
}
