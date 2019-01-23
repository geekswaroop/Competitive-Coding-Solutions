
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str1[101],str2[101];
int i;
//clrscr();
//printf(“Enter first string \n”);
gets(str1);
//printf(“Enter second string \n”);
gets(str2);
i=stricmp(str1,str2);
if(i==0)
printf("0");
else if(i<0)
printf("-1");
else
printf("1");

}
