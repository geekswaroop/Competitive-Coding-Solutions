/*#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,temp;
    vector<int>v;
    vector<int>vn;
    vector<int>vp;
    vector<int>v0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    //sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        if(v[i]<0)
            {
                //cn++;
                vn.push_back(v[i]);
            }

        if(v[i]>0)
            {
                //cp++;
                vp.push_back(v[i]);
            }
        if(v[i]==0)
            {
                //c0++;
                v0.push_back(v[i]);
            }
    }
    if(vn.size()%2==0)
    {
        v0.push_back(vn[0]);
        vn.erase(vn.begin());
    }
    if(vp.size()==0)
    {
        vp.push_back(vn[1]);
        vp.push_back(vn[2]);
        vn.erase(vn.begin()+1);
        vn.erase(vn.begin()+2);
    }
    //printing the final solution
    cout<<vn.size()<<" ";
    for(i=0;i<vn.size();i++)
    {
        cout<<vn[i]<<" ";
    }
    cout<<endl;
    cout<<vp.size()<<" ";
    for(i=0;i<vp.size();i++)
    {
        cout<<vp[i]<<" ";

    }
    cout<<endl;
    cout<<v0.size()<<" ";
    for(i=0;i<v0.size();i++)
    {
        cout<<v0[i]<<" ";
    }


    return 0;
}*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        if (*it < 0)
        {
            cout << "1 " << *it << endl;
            arr.erase(it);
            break;
        }
    }

    bool found(false);
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        if (*it > 0)
        {
            found = true;
            cout << "1 " << *it << endl;
            arr.erase(it);
            break;
        }
    }

    if (!found)
    {
        cout << "2";
        int count = 0;
        for (vector<int>::iterator it = arr.begin(); count < 2;)
        {
            if (*it < 0)
            {
                cout << " " << *it;
                it = arr.erase(it);
                ++count;
            }
            else
            {
                ++it;
            }
        }
        cout << endl;
    }

    cout << arr.size();
    for (size_t i = 0; i < arr.size(); ++i)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}
