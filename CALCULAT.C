#include<conio.h>
#include<stdio.h>
void main()
{
 int c;
 int x;
 int y;
 clrscr();
 M:
 printf("...MY CALCULATOR...\n");
   printf("1.ADD\n");
   printf("2.SUB\n");
   printf("3.MUTI\n");
   printf("4.DIV\n");
   printf("Enter your choice\n");
   scanf("%d",&c);
 if(c>=1 && c<=4)
    {
     printf("Enter no.1\n");
     scanf("%d",&x);
     printf("Enter no.1\n");
     scanf("%d",&y);
   switch(c)
    {
      case 1:
      printf("ADD=%d\n",x+y);
      goto M;
     case 2:
      printf("SUB=%d\n",x-y);
      goto M;
       case 3:
      printf("MULTI=%d\n",x*y);
      goto M;
      case 4:
      printf("DIV=%d\n",x/y);
      goto M;
    }

  }
    else
    {
      printf("Invalid Choice") ;
    }
    getch();
}