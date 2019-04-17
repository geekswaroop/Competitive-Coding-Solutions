#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i;
    int count=0;
    int score[100];
    scanf("%d %d", &n,&k);
    for(i=1;i<(n+1);i++)
    {
        scanf("%d", &score[i]);
    }
    for(i=1;i<(n+1);i++)
    {
        if((score[i]>=score[k])&&score[i]>0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}
