#include<bits/stdc++.h>
using namespace std;
int main()
{
  stack<int>s;
  int q;
  cin>>q;
  while(q--)
  {
    int choice;
    cin>>choice;
    switch(choice)
    {
      case 1:
      {
        cout<<s.top()<<endl;
        break;
      }
      case 2:
      {
        int temp;
        cin>>temp;
        s.push(temp);
        break;
      }
      case 3:
      {
        s.pop();
        break;
      }
      case 4:
      {
        cout<<s.size()<<endl;
        break;
      }
    }

  }
}


s.push(temp);
s.size();
s.top();
s.pop();