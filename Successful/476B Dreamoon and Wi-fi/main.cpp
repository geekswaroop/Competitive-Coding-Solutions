/*#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int main()
{
    int cnq=0,i,j,dist=0,distp=0,cnt=0,cnp1=0,cnp2=0;
    char a[11],b[11];
    int pre[11];
    cin>>a;
    cin>>b;
    int ln=strlen(a);
    for(i=0;i<ln;i++)
    {
        if(a[i]=='+')
            {dist++;cnp1++;}
        if(a[i]=='-')
            dist--;
        if(b[i]=='+')
            {distp++;cnp2++;}
        if(b[i]=='-')
            distp--;
        if(b[i]=='?')
            cnq++;

    }
    /*if(cnq!=0)
    {
        for(i=1;i<=(cnq+1);i++)
        {
            a[i]=cnq-2*(i-1);
        }

    }
    if(cnq==0)
    {
        if(distp==dist)
            printf("%0.12f",1.0);
        else
            printf("%0.12f",0.0);
    }
    else
    {
        for(i=1;i<=cnq+1;i++)
        {
            if(distp+a[i]==dist)
            {
                cnt++;
            }
        }
        printf("%0.12f",(1.0*cnt)/(cnq+1));
    }*/
    /*int temp=(cnp1-cnp2);
    int num=nCr(cnq,temp);
    int denom=pow(2,cnq);
    printf("%0.12f", (1.0*num)/(denom));

    return 0;
}*/
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std ;

int main(void)
{
    char s1[15], s2[15] ;

    scanf("%s%s", s1, s2) ;

    int n = strlen(s1) ;

    int answerPosition = 0 ;
    for(int i=0;i<n;i++)
        answerPosition += (s1[i]=='+'?1:-1) ;

    int finalPosition = 0 ;
    int moves = 0 ; //number of '?'
    for(int i=0;i<n;i++)
    {
        if(s2[i]=='?')
            moves++ ;
        else
            finalPosition += (s2[i]=='+'?1:-1) ;
    }

    int distance = answerPosition-finalPosition ;
    double answer ;
    if((distance+moves)%2!=0 || moves<abs(distance)) //can't reach the destination no matter how
        answer = 0 ;
    else
    {
        int m = (moves+abs(distance))/2 ; //moves needed toward the distance m is abs(distance)+(moves-abs(distance))/2
        //answer is C(moves,m)/(1<<moves)
        int c = 1 ;
        for(int i=0;i<m;i++)
            c *= moves-i ;
        for(int i=2;i<=m;i++)
            c /= i ;
        answer = (double)c/(1<<moves) ;
    }

    printf("%.12f\n", answer) ;

    return 0 ;
}
