#include <iostream>

using namespace std;

int main()
{
    int t,m,n,sum_x,sum_y,i,temp;
    cin>>t;
    while(t--)
    {   sum_x=0;sum_y=0;
        cin>>m>>n;
        for(i=0;i<m-1;i++)
        {
            cin>>temp;
            sum_x+=temp;
        }
        for(i=0;i<n-1;i++)
        {
            cin>>temp;
            sum_y+=temp;
        }
        int ans1=(sum_y+n*sum_x);
        int ans2=(sum_x+m*sum_y);
        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}
