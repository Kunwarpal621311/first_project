#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int a;
	char n,op;
do
{
	clrscr();
	srand(time(0));
	a=rand()%3+1;
	//1=r
	//2=s
	//3=p
	printf("enter the your option between\n r=rock\n s=scissors\n p=paper\n");
	scanf("%c",&n);
	if(n=='r'&&a==1)
	{
		printf("draw you boht select same\n");
		printf("You choose= rock \n computer choose= rock " );
	}
	else if(n=='r'&&a==2)
	{
		printf("You win and \n");
		printf("You choose = rock \n computer choose= scissors " );
	}
	else if(n=='r'&&a==3)
	{
		printf(" computer win\n");
		printf("You choose = rock \n computer choose= paper " );
	}
	else if(n=='s'&&a==1)
	{
		printf("comupter win\n");
		printf("You choose = scissors \n computer choose= rock" );
	}
	else if(n=='s'&&a==2)
	{
		printf("draw you boht selest same\n");
		printf("You choose = scissors \n computer choose= scissors " );
	}
	else if(n=='s'&&a==3)
	{
		printf("You win\n");
		printf("You choose = scissors \n computer choose= paper" );
	}
	else if(n=='p'&&a==1)
	{
		printf("you win\n");
		printf("You choose = paper \n computer choose= rock" );
	}
	else if(n=='p'&&a==2)
	{
		printf("computer win\n");
		printf("You choose = paper \n computer choose= scissors " );
	}
	else if(n=='r'&&a==3)
	{
		printf("draw\n");
		printf("You choose = paper \n computer choose= paper " );
	}
	else

	printf("worng option\n");


	printf("\ndo you want play is again y/n: ");
	 fflush(stdin);
	scanf("%c",&op);
	fflush(stdin);


 } while(op=='y');



}