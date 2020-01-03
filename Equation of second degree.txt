#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
float  a,b,c,bpower2 , m  ;
float x1 , x2 , img ;
clrscr();
printf("Enter coefficient a:");
scanf("%f" , &a);
printf("Enter coefficient b:");
scanf("%f" ,&b);
printf("Enter coefficient c:");
scanf("%f", &c);

m = b*b -4*a*c;

if(m>0)
{
x1 = (-b+sqrt(m))/(2*a);
x2 = (-b - sqrt(m))/(2*a);
printf("Frist solution is: %f \n",x1);
printf("Second solution is: %f" , x2);
}

if( m == 0)
{
x1= (-b)/(2*a);
x2 = x1;
printf("Frist solution is: %f \n",x1);
printf("Second solution is: %f" , x2);
}
if(m<0)
{
img = sqrt(-1*m)/2*a;
x1 =((-b)/(2*a));
x2 =((-b)/(2*a));
printf("Frist solution is: %f+ %fi\n",x1,img);
printf("Second solution is: %f- %fi" , x2,img);
}
getch();
return 0 ;
}

