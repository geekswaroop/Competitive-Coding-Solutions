//FIFO First in First out
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  queue<int>q;
  while(t--)
  {

    int choice;
    cin>>choice;
    switch(choice)
    {
      case 1:
      {
        cout<<q.front()<<endl;
        break;
      }
      case 2:
      {
        cout<<q.back()<<endl;
        break;
      }
      case 3:
      {
        int temp;
        cin>>temp;
        q.push(temp);
        break;
      }
      case 4:
      {
        q.pop();
        break;
      }
      case 5:
      {
        cout<<q.size()<<endl;
        break;
      }
    }
  }
}

//test cases
/*
8
3 1
3 2
3 3
1
2
4
5
4
*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  queue<int> g;
  g.push(1);
  g.push(2);
  g.push(3);
  cout<<g.front()<<endl;
  cout<<g.back()<<endl;
  g.pop();
  cout<<g.size()<<endl;

}*/

q.push(temp);q.back();q.front();q.pop();q.size();