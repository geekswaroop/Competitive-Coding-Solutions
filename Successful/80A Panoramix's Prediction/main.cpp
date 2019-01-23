#include <iostream>

using namespace std;

int main()
{
    int m,n,key=0;
    int prime[16]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    cin>>m>>n;
    for(int i=0;i<15;i++)
    {
        if((prime[i]==m)&&(prime[i+1]==n))
            key=1;

    }
   /* for(int i=0;i<15;i++)
    {
        cout<<prime[i];
    }*/
    if(key)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
