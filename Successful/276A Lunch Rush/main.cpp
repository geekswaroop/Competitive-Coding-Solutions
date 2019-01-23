#include <iostream>

using namespace std;

int main()
{
    long long t,k,f,joy=INT_MIN,n;
    cin>>n>>k;
    while(n--)
    {
        cin>>f>>t;
        if(t<k)
        {
            if(f>joy)
                joy=f;
        }
        else
        {
            if(f-t+k >joy)
            {
                joy=f-t+k;
            }
        }
    }
    cout<<joy;
    return 0;
}
