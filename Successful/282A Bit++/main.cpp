#include <iostream>

using namespace std;

int main()
{
    int n,x=0;
    char a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a=='+'||b=='+')
            x=x+1;
        else
            x=x-1;

    }
    cout<<x;
    return 0;
}
