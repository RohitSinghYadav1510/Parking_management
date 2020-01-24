#include<stdio.h>
#include<conio.h>
int Menu();
void Showstatus();
void Delete();
void Bus();
void Riksha();
void Cycle();
nob=0,nor=0,noc=0,amount=0,count=0;

int Menu()
{ int ch;

 printf("\n1. Enter the Bus");
 printf("\n2. Enter the riksha");
 printf("\n3. Enter the cycle");
 printf("\n4. Enter the showstatus");
 printf("\n5. Enter the Delete data");
 printf("\n6. Enter the exit:");
 printf("\n\nEnter your choice");

 scanf("%d",&ch);
 return ch;
}
void Showstatus()
{
 printf("\nNo.of bus=%d",nob);
 printf("\nNo.of riksha=%d",nor);
 printf("\nNo.of cycle=%d",noc);
 printf("\nTotal again amount=%d",amount);
 printf("\nToatal vehicles=%d",count);
}
void Delete()
{
 nob=0;
 nor=0;
 noc=0;
 amount=0;
 count=0;
}
void Bus()
{
  nob++;
  amount=amount+100;
  count++;
  printf("Bus entry Successful");
}
void Riksha()
{
  nor++;
  amount=amount+50;
  count++;
  printf("Riksha entry Successful");
}
void Cycle()
{
  noc++;
  amount=amount+25;
  count++;
  printf("Cycle entry Successful");
}
void main()
{
  while(1)
  {
  switch(Menu())
  {
   case 1:Bus();
    break;
   case 2:Riksha();
   break;
   case 3:Cycle();
   break;
   case 4:Showstatus();
   break;
   case 5:Delete();
   break;
   case 6:exit(0);
   default:
       printf("\nInvalid choice:");
  }
  getch();
  }
}
