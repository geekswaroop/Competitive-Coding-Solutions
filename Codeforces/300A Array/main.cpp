#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cp=0,cn=0,c0=0,i,temp;
    vector<int>v;
    vector<int>vn;
    vector<int>vp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        if(v[i]<0)
            {cn++;vn.push_back(v[i]);}

        if(v[i]>0)
            {cp++;vp.push_back(v[i]);}
        if(v[i]==0)
            c0++;
    }
    if(vp.size()>0)
    {       if(cn%2==1)
            {
                cout<<cn<<" ";
                for(i=0;i<vn.size();i++)
                {
                    cout<<vn[i]<<" ";
                }
                cout<<endl;
                cout<<cp<<" ";
                for(i=0;i<vp.size();i++)
                {
                    cout<<vp[i]<<" ";
                }
                cout<<endl;
                cout<<c0<<" ";
                for(i=0;i<c0;i++)
                {
                    cout<<"0"<<" ";
                }
            }
            else
            {
                    cout<<1<<" "<<vn[0]<<" ";
                    /*for(i=0;i<vp.size();i++)
                    {
                        cout<<vp[i]<<" ";
                    }*/
                    cout<<endl;
                    cout<<(cp)<<" ";
                    for(i=0;i<vp.size();i++)
                    {
                        cout<<vp[i]<<" ";
                    }
                    cout<<endl;
                    cout<<c0+cn-1<<" ";
                    for(i=0;i<c0;i++)
                    {
                        cout<<"0"<<" ";
                    }
                    for(i=1;i<vn.size();i++)
                    {
                        cout<<vn[i]<<" ";
                    }

            }
    }
    else if(vp.size()==0)
    {
        if(cn%2==1)
        {
            cout<<1<<" "<<vn[0]<<endl;
            cout<<cn-1<<" ";
            for(i=1;i<vn.size();i++)
            {
                cout<<vn[i]<<" ";
            }
            cout<<endl;}
            cout<<c0<<" ";
            for(i=0;i<c0;i++)
            {
                cout<<"0"<<" ";
            }

    }

    return 0;
}
