#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w;
    scanf("%d", &w);
    if(w==2)
            printf("NO\n");
    else if ((w%4==0)||(w%2==0))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
