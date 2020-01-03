#include<stdio.h>
#include<conio.h>
int main()
{
 int r , c , num, n, size ;
 clrscr();
 printf("Please Enter Odd Number Of Matrix Size (n*n):");
 scanf("%d",&n);
 size = n*n;


 for(num = 1 ; num<=size ; num++){
 if(num==1){
 r = 1;
 c = (n+1)/2;
 }


 else if ( ((num -1)% n) != 0)
       {

       r = r-1;
       c = c -1 ;
	 if(r ==0)
	 {
	 r =n;
	 }
	 if(c ==0)
	 {
	 c =n;
	 }
       }
      else
      {
	r = r+1;
	c = c;
	if (r>n)
	{
	    r = 1 ;
	}
      }
     // printf("Row %d Column  %d num  %d\n",r ,c ,num);
      gotoxy(c*10, r*10);
      printf("%d", num);
      }
      getch();

      return 0 ;

      }


