#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    long long t,i,h,p,a,time;
    cin>>t;
    while(t--)
    {
        scanf("%lld%lld%lld", &h,&p,&a);
        time=0;
        i=1;
        for(i=1;;i++)
        {
            if(h-p*i >0)
            {
                h=(h-p*i+a);
                time+=2;
                continue;
            }
            else
                {time++;break;}
        }
       /* while((h-p*i)>0)
        {
            i++;
            h+=a;
            time+=2;

        }
        time++;*/
        printf("%lld\n",time);
    }
    return 0;
}
