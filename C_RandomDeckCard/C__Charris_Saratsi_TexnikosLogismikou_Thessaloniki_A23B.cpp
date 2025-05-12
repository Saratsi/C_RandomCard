#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	system("CHCP 1253 > nul");
	
	int card_number, card_symbol, breaker;
	const char* true_number;
	char true_symbol;
	
	srand(time(0));
	do
	{
		card_number =1 + rand()%13;
		card_symbol=1 + rand()%4;
		if(card_number==1)           //Μετατροπη αριθμων σε χαρακτηρες.
		true_number= "A";
		else if(card_number==11)
		true_number= "J";
		else if(card_number==12)
		true_number= "Q";
		else if(card_number==13)
		true_number= "K";
		else if(card_number==2)
		true_number= "2";
		else if(card_number==3)
		true_number= "3";
		else if(card_number==4)
		true_number= "4";
		else if(card_number==5)
		true_number= "5";
		else if(card_number==6)
		true_number= "6";
		else if(card_number==7)
		true_number= "7";
		else if(card_number==8)
		true_number= "8";
		else if(card_number==9)
		true_number= "9";
		else
		true_number= "10";      
		if(card_symbol== 1)    //Μετατροπη αρι8μων σε συμβολα και τοποθετηση καταλληλου χρωματος συμβολου.      
		{
			true_symbol= '\3';
			system("color fc");
		}
		else if(card_symbol==2)
		{
			true_symbol= '\4';
			system("color fc");
		}
		else if(card_symbol==3)
		{
			true_symbol= '\5';
			system("color f0");
		}
		else if(card_symbol==4)
		{
			true_symbol= '\6';
			system("color f0");
		}
		if(card_number==10)                       //Μια if else για οταν ειναι 10 επειδη χαλαει την δεξια πλευρα της καρτας.
		{
			printf("\t\t\t -------------------\n");
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|  %s               |\n",true_number);
		    printf("\t\t\t|  %c                |\n",true_symbol);
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|         %s        |\n",true_number);
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|                %c  |\n",true_symbol);
		    printf("\t\t\t|                %s |\n",true_number);
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t -------------------\n\n\n");
		}
		else
		{
			printf("\t\t\t -------------------\n");
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|  %s                |\n",true_number);
		    printf("\t\t\t|  %c                |\n",true_symbol);
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|         %s         |\n",true_number);
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t|                %c  |\n",true_symbol);
		    printf("\t\t\t|                %s  |\n",true_number);
		    printf("\t\t\t|                   |\n");
		    printf("\t\t\t -------------------\n\n\n");
		}
		printf("Next Card: Yes(0), Exit(1): ");
		scanf("%d", &breaker);
		if(breaker==0)                                          //Κανει clear the screen οταν εφανιζεται καινουρια καρτα.
		system("CLS");
	}while(breaker==0);
	
	system("PAUSE");
	return 0;
}
