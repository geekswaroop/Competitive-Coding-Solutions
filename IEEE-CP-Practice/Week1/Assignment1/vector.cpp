#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  vector<int>v;
  std::vector<int>::iterator it;

  while(t--)
  {
    int choice;
    cin>>choice;
    switch(choice)
    {
      case 1:
      {
        int temp;
        cin>>temp
        v.push_back(temp);
        break;
      }
      case 2:
      {
        int temp1,temp2;
        cin>>temp1>>temp2;
        v[temp1]=temp2;
        break;
      }
      //something fishy here
      case 3:
      {
        int temp;
        cin>>temp;
        it = std::find (v.begin(),v.end(),temp);
        if(it!=v.end())
        {
          cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;
        break;
      }
      //fishy
      case 4:
      {
        int temp;
        cin>>temp;
        it = std::find(v.begin(),v.end(),temp);
        if(it!=v.end())
        v.erase(it);

        break;
      }

      case 5:
      {
        cout<<v.size()<<endl;
        break;
      }
      case 6:
      {
        sort(v.begin(),v.end());
        break;
      }
      case 7:
      {
        for(int i=0;i<v.size();i++)
        {
          cout<<v[i]<<" ";
        }
        cout<<endl;
        break;
      }
    }
  }
}


auto it = std::find (v.begin(),v.end(),temp);
        if(it!=v.end())
        {
          cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;