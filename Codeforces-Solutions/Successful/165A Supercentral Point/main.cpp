/*#include <iostream>

using namespace std;

int main()
{
    int x[201],y[201];
    int n,i,j,k,cn=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=(i+1);j<=n;j++)
        {
            if((x[j]>x[i] && y[j]==y[i])||(x[j]<x[i] && y[j]==y[i])||(x[j]==x[i] && y[j]<y[i])||(x[j]==x[i]&& y[j]>y[i]))

                {cn++; break;}
        }
    }
    cout<<cn;
    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
	int arr[201][2];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    for(int j=0;j<2;j++){
	        cin>>arr[i][j];
	    }
	}
	int count=0;
	for(int i=0;i<n;i++){
	    int x=arr[i][0];
	    int left=0,right=0,up=0,below=0;
	    int y=arr[i][1];
	    for(int j=0;j<n;j++){
	        if(x<arr[j][0] && y==arr[j][1]){
	            right++;
	        }else if(x>arr[j][0] && y==arr[j][1]){
	            left++;
	        }else if(x==arr[j][0] && y<arr[j][1]){
	            up++;
	        }else if(x==arr[j][0] && y>arr[j][1]){
	            below++;
	        }
	        if(right>0 && left>0 && up>0 && below>0){
	            if((left+right+up+below)>=4){
	                count++;
	                break;
	            }
	        }
	    }
	}
	cout<<count;
	return 0;
}
