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
    seive();
    int n,value1,value2;

    cin>>n;
    value1=(n/2);
    value2=(n-(n/2));
    while(arr[value1]==0 || arr[value2]==0)
    {
        value1++;
        value2--;
    }
    cout<<value1<<" "<<value2;
    return 0;
}
