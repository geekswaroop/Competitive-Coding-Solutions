#include <iostream>

using namespace std;

int main()
{
    int n,a,b,con;

      con=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
        cin>>a>>b;
        if((b-a)>=2)
            con++;
        }
    cout<<con<<endl;


    return 0;
}
