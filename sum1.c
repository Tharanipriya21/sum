#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
printf("enter the n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("the sum of numbers is %d",sum);
getch();
}
