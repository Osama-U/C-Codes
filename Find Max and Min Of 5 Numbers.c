#include<stdio.h>
#include<conio.h>
int main()
{
int x ,y ,max ,min;
clrscr();
printf("Enter the frist number:");
scanf("%d" , &x);
printf("Enter the second number:");
scanf("%d" ,&y);
if (x>y)
{
 max = x;
 min = y ;
 }
 else
 {
 max = y ;
 min = x ;
 }
 printf("Enter the third number:");
 scanf("%d" , &x);
 if (x > max)
 {
 max = x ;
 }
 else
 {
 if(x<min)
 {
 min = x ;
 }
 }

 printf("Enter the fourth  number:");
 scanf("%d", &x);
 if(x>max)
 {
 max = x ;
 }
 else
 {
 if(x<min)
 {
  min = x ;
  }
  }
 printf("Enter the fifth number:");
 scanf("%d" , & x);
 if(x>max)
 {
 max = x;
 }
 else
 {
 if(x<min)
 {
 min = x;
 }
 }
 printf("Max Num is:%d\n ",max);

 printf("Min Num is:%d" , min);
 getch();
 return 0 ;
 }
