#include <iostream>

using namespace std;

int main()
{
    int cn_5=0,cn_0=0,temp,n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==0)
            cn_0++;
        else
            cn_5++;
    }
    if(cn_0==0)
    {
        cout<<-1;
    }
    else if(cn_5<9)
    {
        cout<<0;
    }
    else
    {
        cn_5-=cn_5%9;
        for(i=0;i<cn_5;i++)
        {
            cout<<5;
        }
        for(i=0;i<cn_0;i++)
            cout<<0;
    }
    return 0;
}
