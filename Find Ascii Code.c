#include<stdio.h>
#include<conio.h>
int main()
{
  char ch;
  clrscr();

 do
 {
  ch = getch();

  if(ch == 0)

    {
      ch =getch();
      gotoxy(20,20);
      printf("Ascii Code = %d" , ch);

    }
    gotoxy(20,20);
    printf("Ascii Code = %d" , ch);

  }while(ch!=27);


    return 0 ;


}
