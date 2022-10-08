#include<stdio.h>
#include<conio.h>
void main()
{
int a,t,bal;
clrscr();
printf("input amount=");
scanf("%d",&a);
printf("num of tickets=");
scanf("%d",&t);
if((a/5==0)&&(t*a)%5==0)
{
t=a/5;
printf("collect your tickets");
bal=a-(t*5);
printf("\nbalance=%d",bal);
}
else if(a%5!=0)
{
printf("invalid coin");
}
else
{
printf("not enough amount");
}
getch();
}