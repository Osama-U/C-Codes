#include<stdio.h>
#include<conio.h>

 int main()

   {

     int grade[4][3];
     int col , row ,total , sum  ;
     float avg;

     clrscr();

     for(row=0 ; row<3 ; row++)

       {
	 printf("\n");
	 printf("Enter Grades for Student %d" , (row+1) );
	 printf("\n");


	  for(col=0 ; col<4 ; col++)

	    {
	      printf("Enter Grade of Subject%d:",(col+1) );

	      scanf("%d",&grade[col][row]);

	     }


       }

	 printf("\n***********************\n");

	 for(row=0 ; row<3 ; row++)

	  {
	     total = 0;

	   for(col=0 ; col<4 ; col++)

	    {
	       total = total + grade[col][row];

	    }
	    printf("\n");
	    printf("Sum of Grades for Student%d:%d\n",(row+1),total );
	    printf("\n");

	  }
	   printf("\n***********************\n");

	  for(col=0 ; col<4 ; col++)

	    {

	       sum=0;
	       for(row = 0 ; row<3 ; row++)

	       {
		 sum = sum + grade[col][row];

	       }

	       avg = sum / 3.0;

	       printf("\n");
	       printf("Average for subject%d:%f \n",(col+1),avg);
	       printf("\n");

	    }




     getch();
     return 0 ;

   }






















