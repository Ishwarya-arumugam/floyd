#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,j,i,n;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",a);
a++;
}
printf("\n");
}
getch();
}
