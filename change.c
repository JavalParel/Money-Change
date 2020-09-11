#include <stdio.h>
#include<unistd.h>
int main() {
	int amt, total,b_amt,sel=0;
	do{printf("\nEnter the billed amount :- ");
	scanf("%d",&b_amt);
	printf("\nEnter the given amount :- ");
	scanf("%d",&amt);
	amt=amt-b_amt;
	if(amt>1){
	for(int i=0; i<=2; i++)//this is just for giving realistic look to my program
	{
		if(i==0)
		{
			printf("Counting.");
		}
		else
		{
			printf("..");
		}
	sleep(1);
	}//this is the end of for loop
	//start counting
	total = (int)amt/500;
	printf("\n\t\t\t\t+==================================+");
	printf("\n\t\t\t\t| No. |        Type      | Amount  |");
	printf("\n\t\t\t\t+-----+------------------+---------+");
	printf("\n\t\t\t\t|  %d  | Note(s) of 500.00|", total);
	int a=total*500;
	if(a>999)
		printf(" %d    |", a);
	else if(a<1)
		printf(" %d       |", a);
	else
		printf(" %d     |", a);
	printf("\n\t\t\t\t+-----+------------------+---------+");
	amt = amt-(total*500);

	total = (int)amt/200;
	printf("\n\t\t\t\t|  %d  | Note(s) of 200.00|", total);
	a=total*200;
	if(a>1)
	printf(" %d     |\n",a);
	else
		printf(" %d       |\n",a);
	printf("\t\t\t\t+-----+------------------+---------+\n");
	amt = amt-(total*200);

	total = (int)amt/100;
	printf("\t\t\t\t|  %d  | Note(s) of 100.00|", total);
	a=total*100;
	if(a==0)
		printf(" %d       |\n",a);
	else
		printf(" %d     |\n",a);
	printf("\t\t\t\t+-----+------------------+---------+\n");
	amt = amt-(total*100);
	
	total = (int)amt/50;
	printf("\t\t\t\t|  %d  | Note(s) of 50.00 |", total);
	a=total*50;
	if(a==0)
		printf(" %d       |\n",a);
	else
		printf(" %d      |\n",a);
	printf("\t\t\t\t+-----+------------------+---------+\n");
	amt = amt-(total*50);
	
	total = (int)amt/20;
	printf("\t\t\t\t|  %d  | Note(s) of 20.00 |", total);
	a=total*20;
	if(a<1)
		printf(" %d       |\n",a);
	else
		printf(" %d      |\n",a);
	printf("\t\t\t\t+-----+------------------+---------+\n");
	amt = amt-(total*20);
	
	total = (int)amt/10;
	printf("\t\t\t\t|  %d  | Note(s) of 10.00 |", total);
	a=total*10;
	if(a<1)
		printf(" %d       |\n",a);
	else
		printf(" %d      |\n",a);
	printf("\t\t\t\t+-----+------------------+---------+\n");
	amt = amt-(total*10);
	
	total = (int)amt/5;
	printf("\t\t\t\t|  %d  | Coin(s) of 5.00  |", total);
	a=total*5;
	printf(" %d       |\n",a);
	printf("\t\t\t\t+-----+------------------+---------+\n");
	amt = amt-(total*5);
	
	total = (int)amt/2;
	printf("\t\t\t\t|  %d  | Coin(s) of 2.00  |", total);
	a=total*2;
	printf(" %d       |\n",a);
	printf("\t\t\t\t+-----+------------------+---------+\n");
	amt = amt-(total*2);
	
	total = (int)amt/1;
	printf("\t\t\t\t|  %d  | Coin(s) of 1.00  |", total);
	a=total*1;
	printf(" %d       |\n", a);
	printf("\t\t\t\t+=====+==================+=========+");
		//end counting
	printf("\n\n-------------------------------------------------------------------------------------------------\n");
		
	}
	printf("Press 0 for exit");
		scanf("%d",sel);
}while(sel != 0);
}
