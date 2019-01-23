#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

    scanf("%d %d %d", &x,&y,&z);
    int a,b,c,d,e,f,max;
    a=(x+y+z);
    b=(x*y*z);
    c=(x+(y*z));
    d=((x*y)+z);
    e=((x+y)*z);
    f=(x*(y+z));
    if(a>=b && a>=c && a>=d && a>=e && a>=f)
    max=a;
    else if(b>=a && b>=c && b>=d && b>=e && b>=f)
    max=b;
    else if(c>=a && c>=b && c>=d && c>=e && c>=f)
    max=c;
    else if(d>=a && d>=b && d>=c && d>=e && d>=f)
    max=d;
    else if(e>=a && e>=b && e>=c && e>=d && e>=f)
    max=e;
    else if(f>=a && f>=b && f>=c && f>=d && f>=e)
    max=f;
    printf("%d", max);

   return 0;
}
