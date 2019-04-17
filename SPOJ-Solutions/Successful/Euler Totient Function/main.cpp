#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
bool arr[N+5];

void seive(){
arr[0]=1;
arr[1]=1;
for(int i=2;i<=N;i++){
	if(arr[i])continue;
	for(long long j=(long long)i*i;j<=N;j+=i){
		arr[j]=1;
	}
}

}


int main()
{
    int n,t,ans,i;
    cin>>t;
    //seive();
    while(t--)
    {   seive();
        cin>>n;
        ans=1;
        int temp=n;
        for(i=0;i<=n;i++)
        {
            if(arr[i]==0)
            {   while(n%i==0)
                {
                    n/=i;
                    ans*=(ans-ans/i);
                }
            }
      //  cout<<(ans)<<endl;

        }
        cout<<(temp*ans)<<endl;
    }
    return 0;
}
