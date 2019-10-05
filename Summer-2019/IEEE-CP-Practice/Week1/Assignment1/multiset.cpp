#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,n,i,x,y,z;
    multiset <pair < int , pair<int,int> > > mset;
    multiset <pair < int , pair<int,int> > > :: iterator itr;
    cin >> q;
    while(q--)
    {
        cin >> n;
        switch(n)
        {
        case 1:
            cin >> x;
            cin >> y;
            cin >> z;
            mset.insert(make_pair(x,make_pair(y,z)));
            break;
        case 2:
            itr = --mset.end();
            cout << "(" << (*itr).first << ",(" << (*itr).second.first << "," << (*itr).second.second << "))\n";
            break;
        case 3:
            itr = --mset.end();
            mset.erase(*itr);
            break;
        case 4:
            for (itr = mset.begin(); itr != mset.end(); ++itr)
                cout << "(" << (*itr).first << ",(" << (*itr).second.first << "," << (*itr).second.second << "))\t";
            cout << endl;
            break;
        case 5:
            cout << mset.size() << "\n";
            break;


        }
    }
    return 0;
}

multiset <pair < int , pair<int,int> > > mset;
    multiset <pair < int , pair<int,int> > > :: iterator itr;
//insert x,(y,z)
            mset.insert(make_pair(x,make_pair(y,z)));
//print top most element
itr = --mset.end();
cout << "(" << (*itr).first << ",(" << (*itr).second.first << "," << (*itr).second.second << "))\n";
//pop topmost element
itr = --mset.end();
mset.erase(*itr);
break;
//print entire multiset
for (itr = mset.begin(); itr != mset.end(); ++itr)
cout << "(" << (*itr).first << ",(" << (*itr).second.first << "," << (*itr).second.second << "))\t";