#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void line_editor(int x,char* ptr2);

 int main()

   {
       int s;
       char* ptr1;
       clrscr();

       printf("How much charater would you like to enter:");
       scanf("%d",&s);



       ptr1 = (char*)malloc(sizeof (char) * s);



       line_editor(s,ptr1);

       free(ptr1);

       return 0 ;


   }




  void line_editor(int x,char *ptr2)

  {


     char ch;
     int c,count;
     int i;
     clrscr();

     for(i=0;i<x ; i++)
     {
       ptr2[i] = 0;
     }

    // *ptr2=0;

   c=1;
   count=0;
   gotoxy(c,1);
     do
	{



	ch= getch();

	 if ( ch == 0) // Extended key

	   {

	     ch=getch();      

	      if(ch == 75)    //<-----

		 {

		   if(c==1)

		    {
		       c=1;

		     }
		   else

		    {
		     c--;

		    }
		      gotoxy(c,1);

		 }


		   else if (ch ==77)   /// --->

			  {
			    if(c>=count)

			      {
				c=count;
			      }

			    else

			     {
				c++;
			     }

			     gotoxy(c,1);
			  }

		   else if (ch == 71)

			  {

			    c=1;
			    gotoxy(c,1);

			  }

		    else if (ch == 79)

			  {

			    gotoxy(count,1);
			  }

		 /*   else if (ch == 8)

			  {
			     gotoxy(count-1,1);
			     printf("o ");

			  }    */

	    }


	    else      //Normal
		 {
		   if(ch == 13)

		     {
			printf("\nArray is:%s",ptr2);


		     }



		  /* else if(ch==8)

		     {
			gotoxy(c-1,1);
			printf(" ");
			gotoxy(c-1,1);

		     }

		   else if (ch==127)

		    {
			gotoxy(c+1,1);
			printf(" ");
			gotoxy(c,1);

		    }*/


		   else if(count<x)

		     {

		      //line[count]=ch;

		      ptr2[count]=ch;
		      count++;
		      c++;
		      printf("%c",ch);

		     }





		 }



	   }while(ch != 27);










   }



