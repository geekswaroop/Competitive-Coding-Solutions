#include <iostream>

using namespace std;

int main()
{
    int n,cn_100=0,cn_200=0,temp1,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp1;
        if(temp1==100)
        {
            cn_100++;
        }
        else
            cn_200++;
    }
    if(cn_100%2==1 || n==1 || (cn_100==0 && n%2==1))
    {
        cout<<"NO";

    }
    else
        cout<<"YES";
    return 0;
}
