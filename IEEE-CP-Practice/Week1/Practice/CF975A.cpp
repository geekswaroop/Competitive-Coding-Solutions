// Referred Editorial
// Reading Time:1
// Thinking Time: 6
//COding Time: 3
//Debug Time: 9

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,j;
  cin>>n;
  vector<string>words;
  int ndw=1;
  while(n--)
  {
    string s,ans;

    cin>>s;
    sort(s.begin(),s.end());
    ans+=s[0];
    for(i=0;i<s.size()-1;i++)
    {
      if(s[i+1]!=s[i])
      {

        ans+=s[i+1];

      }
      else
        continue;
    }
    //words.push_back(ans);
    //int ndw=1; //Number of distinct words


       for(unsigned int counter = 0; counter!=words.size(); ++counter)
       {
           //Check if we already have this word in our list
           if(ans!=words[counter])
           {
               if(counter==words.size()-1)//We have reached the end of list
               {
                   words.push_back(ans);
                   ndw+=1;
               }
           }
           else
           {
               //If there is a match, leave this word
               break;
           }
       }



  }
  for(unsigned int counter = 0; counter!=words.size(); ++counter)
       {
           //Check if we already have this word in our list
           cout<<words[counter]<<endl;
       }

  cout<<ndw;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */



    int n,len,i;
    string str;

    while (cin >> n)
    {
        set <set <char>> mySet;

        while (n--)
        {
            cin >> str;
            len = str.size();
            set <char> S;

            for (char x : str)
                S.insert(x);

            mySet.insert(S);
        }

        cout << mySet.size() << endl;

        mySet.clear();
    }

    return 0;
}
