#include<stdio.h>
#include<conio.h>

int main()

 {
   int Num[5];
   int x,y,max ,min ;
   clrscr();

   for (x=0 ; x<5 ; x++)

     {
       printf("Please Enter Number %d:",(x+1) );
       scanf("%d",&Num[x]);



      }
      max = Num[0];
      min = Num [0];

   for (y=0 ; y<5 ; y++)

      {
	if (Num[y]>max)

	  {
	    max = Num[y];
	  }

	  else
	      if(Num[y]<min)

	      {

		min = Num[y];

	      }

      }
        printf("\n");
	printf("Max Value: %d\n",max);

	printf("Min Value: %d",min);



  getch();
  return 0;
 }
