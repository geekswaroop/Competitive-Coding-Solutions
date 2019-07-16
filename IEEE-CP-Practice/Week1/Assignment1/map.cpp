#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,int> m;
  int t;
  cin>>t;
  while(t--)
  {
    int choice;
    cin>>choice;
    switch(choice)
    {
      case 1://inserting string and int
      {
          string a;
          int b;
          cin>>a>>b;
          m.insert(pair<string, int>(a,b));
          break;
      }
      case 2: //printing the mapped value for temp;
      {
          string temp;
          cin>>temp;
          map<string,int> :: iterator itr;
          itr = m.find(temp);
          cout<<itr->second<<endl;
          break;
      }
      case 3: //checking if temp is a key in the map
      {
        string temp;
        cin>>temp;
        if(m.find(temp)!=m.end())
          cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
        break;
      }
      case 4://printing the entire map
      {
        map<int, int>::iterator itr;

        for (itr = m.begin(); itr != m.end(); ++itr)
        {
          cout << '\t' << itr->first
              << '\t' << itr->second << '\n';
        }

      }

    }
  }
}


//map x(string) to y(int)
  map<string,int> m;

 m.insert(pair<string, int>(a,b));

 //print mapped value for string temp;
 map<string,int> :: iterator itr;
          itr = m.find(temp);
          cout<<itr->second<<endl;
          break;
//check if x is present as a key in map( iterator iterates through keys)
 if(m.find(temp)!=m.end())
          cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
        break;
//printing maps
map<int, int>::iterator itr;

        for (itr = m.begin(); itr != m.end(); ++itr)
        {
          cout << '\t' << itr->first
              << '\t' << itr->second << '\n';