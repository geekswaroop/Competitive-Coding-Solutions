/*#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
   long long b,c;
   int t,ans,i,cn;
   char a[20];
   cin>>t;
   while(t--)
   {
       b=0;ans=1;cn=0;
       cin>>a;
       int ln=strlen(a);
       for(i=ln-1;i>=0;i--)
       {
           if(a[i]=='.')
            break;
            else
                cn++;
       }

       c=pow(10,cn);
       for(i=0;i<ln;i++)
       {
           if(a[i]!='.')
           {
               b=b*10+(a[i]-48);
           }
       }
       if(b>c)
       ans=c/(gcd(b,c));
       else
        ans=c/gcd(c,b);

       cout<<ans<<endl;
   }
    return 0;
}*/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
int gcd(int a,int b){
	if(a<b)
		return gcd(b,a);
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
	   string str;
	   cin>>str;
	   int len=str.length();
	   int c=0;
	   int decimalPointFlag=0;
	   for(int i=len-1;i>=0;i--){
			if(str[i]=='.'){
				decimalPointFlag=1;
				break;
			}
			else{
				c++;
			}
	   }
	   int power=0;
	   int number=0;
	   int numerator;
	   if(decimalPointFlag){
		   for(int i=0;i<len;i++){
			   if(str[i]!='.'){
				number=number*10+str[i]-'0';
				}
		   }
		   power=pow(10,c);
		   numerator=number;
		   printf("%d\n",power/gcd(numerator,power));
	   }
	   else{
	       printf("1\n");
	   }


   }
}
