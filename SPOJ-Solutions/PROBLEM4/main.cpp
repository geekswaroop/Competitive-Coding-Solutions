#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=1e4;
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
    int t,n,test=0;
    cin>>t;
    seive();
    while(t--)
    {
        test++;
        cin>>n;
        if(arr[n]==1)
            cout<<test<<":"<<"NOTPRIME"<<endl;

        else if(n==3)
            cout<<test<<":"<<"2"<<endl;
        else
            cout<<test<<":"<<"1"<<endl;
    }
    return 0;
}
