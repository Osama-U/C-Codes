#include<stdio.h>
#include<conio.h>
int main()
{
int count,num , max ,min,x ;
clrscr();
printf("Please Enter Your Number Count:");
scanf("%d",&count);
printf("Enter Number 1:");
scanf("%d" , &num);
max = num;
min = num;
for (x = 2 ; x<=count ; x++)
{
printf("Enter Number %d:",x);
scanf("%d" , &num);

if (num > max)
{
max = num;
}
else
{
if(num < min)
{
min = num;
}
}
}
printf(" Max Num is:%d\n",max);
printf(" Min Num is:%d",min);
getch();
return 0;
}
