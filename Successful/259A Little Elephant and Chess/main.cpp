#include <iostream>

using namespace std;

int main()
{
    int i,j,cw,cb,flag=1;
    string s;
    for(i=0;i<8;i++)
    {
        //cw=0;cb=0;
        cin>>s;
        if(s=="WBWBWBWB"|| s=="BWBWBWBW")
            continue;
        else
        {flag=0;break;}
    }
        if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
