#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main ()

  {
     char line[40]={0};
     char ch;
     int c,count,i;
     clrscr();


   c=0;
   count=0;

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
				c=count+1;
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

		    else if (ch == 83)

			  {
			    for(i=c ; i<count ; i++)
			      {
				line[i]=line[i+1];
			      }

			      count --;
			      clrscr();
			      gotoxy(1,1);
			      printf("%s",line);
			      gotoxy(c,1);




			  }

	    }


	    else //Normal



		 {
		   if(ch == 13)

		     {
		       line[count]= 0 ;
			printf("\nArray is:%s",line);


		     }



		/*   else if(ch==8)

		     {
			gotoxy(c-1,1);
			printf(" ");
			gotoxy(c-1,1);

		     }*/

		   else if (ch==8)

		    {
		      for(i=c-1 ;i<count; i++)
			 {

			   line[i]=line[i+1];

			 }
			  // line[i]=0;
			   c--;
			   count --;
			   clrscr();
			   gotoxy(1,1);
			   printf("%s",line);
			   gotoxy(c+1,1);

		    }


		   else if(count<39)

		     {

		      line[count]=ch;
		      count++;
		      c++;
		      printf("%c",ch);

		     }





		 }




	   }while(ch != 27);








    return 0 ;

   }
