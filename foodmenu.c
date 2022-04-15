/*
	Program Name	:	foodmenu.c
	Author		  	:	Prajwal Y P
	Task			    :	To build an Food Menu And Recipt Application for Food Service Center.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int tamt,amt=0,qty,item,pc=0,bc=0,sc=0,p=200,b=150,s=100;
	char ch;
	
	while(1)
	{
		printf("\nFAST FOOD MENU\t\t(CART ITEMS:\tPizza(%d)\tBurger(%d)\tSandwich(%d))",pc,bc,sc);
		printf("\n--------------\n");
		printf("\n1.Pizza\t\t-\tRs.200");
		printf("\n2.Burger\t-\tRs.150");
		printf("\n3.Sandwich\t-\tRs.100");
		printf("\n------------------------------\n");
		
		printf("\nEnter Which item you want order\t:\t");
		scanf("%d",&item);
		
		if(item<1 || item>3)
		{
			printf("\n\t\tINVALID ITEM !!");
			getch();
			system("cls");
			continue;
		}
		printf("\nEnter Quantity\t\t\t:\t");
		scanf("%d",&qty);
		
		switch(item)
		{
			case 1: tamt=qty*p;	pc+=qty; break;
			case 2: tamt=qty*b;	bc+=qty; break;
			case 3: tamt=qty*s;	sc+=qty; break;			
		}
		amt+=tamt;
		printf("\nYour Order is Ready please pay\t:\tRs.%d",tamt);
		printf("\n\nContinue with next Order(y/n)\t:\t");
		fflush(stdin);
		ch=getche();
		if(ch=='n' || ch=='N')
			break;
		else
	 		system("cls");
	}
	system("cls");
	printf("\n\n\t\t*******************RECEIPT********************");
	printf("\n\n\t\tPIZZA ORDERED\t\t:\t%d (Rs.%d) ",pc,p);
	printf("\n\n\t\tBURGER ORDERED\t\t:\t%d (Rs.%d) ",bc,b);
	printf("\n\n\t\tSANDWICH ORDERED\t:\t%d (Rs.%d) ",sc,s);
	printf("\n\n\t\tTOTAL PRIZE\t\t:\tRs.%d",amt);	
	printf("\n\n\t\t-----------------------------------------------");
	printf("\n\t\t . . . . . . . Thank You,Visit Agin . . . . . . ");
	printf("\n\t\t-----------------------------------------------\n\n");
}
