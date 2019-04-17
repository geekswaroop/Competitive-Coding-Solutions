#include <iostream>

using namespace std;

int main()
{
    int w,b,t;
    cin>>t;
    while(t--)
    {
        cin>>w>>b;
        if(b%2==1 || b==1)
            cout<<"1.000000"<<endl;
        else
            cout<<"0.000000"<<endl;
    }
    return 0;
}
