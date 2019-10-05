#include <iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
const int N=1e8;
bool arr[N+5];

void seive(){
arr[0]=0;
arr[1]=0;
for(int i=2;i<=N;i++){
	if(arr[i])continue;
	for(long long j=(long long)i*i;j<=N;j+=2*i){
		arr[j]=0;
	}
}

}
double valueE(double d)
{
    return log(d);
}

int main()
{
    int i;
    double ans,temp2,temp,sum;
    while(1)
    {   seive();
        sum=0;
        cin>>temp;
        if(temp==0)break;
        for(i=1;i<=temp;i++)
        {
            sum+=arr[i];
        }
        temp2=temp/(valueE(temp));
        ans=(abs(sum-temp2)/sum)*100;
        printf("%0.1f\n",ans);
        //cout<<temp2;


    }
    return 0;
}
