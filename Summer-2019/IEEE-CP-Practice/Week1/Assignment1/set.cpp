#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin>>q;
  set <int>s;
  while(q--)
  {
    int choice;
    cin>>choice;
    switch(choice)
    {
      case 1:
      {
        int temp;
        cin>>temp;
        s.insert(temp);
        break;
      }
      case 2:
      {
        cout<<s.size()<<endl;
        break;
      }
      case 3:
      {
        set<int> :: iterator it;
        it=s.begin();
        s.erase(it);
        break;
      }
      case 4:
      {
        set <int> ::iterator it;
        it= s.begin();
        cout<<*it<<endl;
        break;
      }
      case 5:
      {
        set <int> ::iterator it;
        for(it=s.begin(),it!=s.end();it++)
        cout<<*itr<<" ";
        cout<<endl;
        break;
      }
      case 6:
      {
        set <int> ::iterator it;
        it= s.end();
        cout<<*it<<endl;
        break;
      }
      case 7:
      {
        int temp;
        cin>>temp;
        set <int> ::iterator it;
        it= s.find(temp);
        if(it!=s.end())
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
        break;
      }
      case 8:
      {
        int temp;
        cin>>temp;
        s.erase(temp);
        break;
      }
    }
  }
}

s.insert(temp);

set<int> :: iterator it;
        it=s.begin();
        s.erase(it);

set <int> ::iterator it;
        it= s.find(temp);
        if(it!=s.end())
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;

s.erase(temp);