#include<stdio.h>
#include<conio.h>
void highlight(int r);
void enter(int r);
int flag;
int main()

{
 int r , c ;
 char ascii;

 clrscr();


 printf("1.Add\n");     //r=1
 printf("2.Edit\n");  	//r=2
 printf("3.New\n");   	//r=3
 printf("4.Display\n");	//r=4
 printf("5.Exit\n");   	//r=5
 r = 1 , c= 1 ;
 gotoxy(c,r);
 flag = 1 ;


 do
 {

    ascii=getch();


     if (ascii == 0) //Extended key
       {
	 ascii = getch();

	 switch(ascii)
	 {

	 case 72:
		    if(r==1)
		    {
		      r=5;
		      highlight(r);
		     gotoxy(c,r);

		    }

		    else
		    {
		     r--;
		     highlight(r);
		     gotoxy(c,r);
		     }

		     break;

	 case 80:

		    if (r==5)
		    {

		     r=1;
		     highlight(r);
		     gotoxy(c,r);
		    }
		    else
		    {

		      r++;
		      highlight(r);
		      gotoxy(c,r);
		    }

		    break;


	 }

       }

     else // Normal key
     {
      if(ascii == 13)
	{

	 enter(r);

	}


      else
      {
	 if(ascii ==27)
	   {
	     flag=0;
	   }

      }

     }



    } while(flag != 0);


 return 0 ;
 }



 void highlight (int r)
 {
  textattr(0x07);
  clrscr();
  gotoxy(1,1);
 printf("1.Add\n");     //r=1
 printf("2.Edit\n");  	//r=2
 printf("3.New\n");   	//r=3
 printf("4.Display\n");	//r=4
 printf("5.Exit\n");   	//r=5
  textattr(0x70);
  switch(r)
    {
      case 1 :
	       gotoxy(1,r);
	       cprintf("1.Add\n");
	       break;
      case 2 :
	       gotoxy(1,r);
	       cprintf("2.Edit\n");
	       break;
      case 3:
	       gotoxy(1,r);
	       cprintf("3.New\n");
	       break;
      case 4 :
	       gotoxy(1,r);
	       cprintf("4.Display\n");
	       break;
      case 5 :
	       gotoxy(1,r);
	       cprintf("5.Exit\n");
	       break;

    }


  }

 void enter(int r)
 {
	switch(r)

	  {
	    case 1:
		     gotoxy(10,1);
		     printf("Add is pressed");
		     break;

	    case 2:
		     gotoxy(10,2);
		     printf("Edit is pressed");
		     break;
	    case 3:
		     gotoxy(10,3);
		     printf("New is pressed");
		     break;
	    case 4:
		     gotoxy(15,4);
		     printf("Display is pressed");
		     break;
	    case 5: flag = 0 ;
	   }

 }
