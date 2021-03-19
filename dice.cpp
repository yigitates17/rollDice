#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void opt1(int dice_no)
{
	int j, complete=0, i, D[dice_no], index_1, index=0;
		for(j=0;complete!=1;j++)
		{
		printf("TEST %d -- ", j+1);
		for(i=0;i<dice_no;i++)
		{
		D[i]= ((rand()%6) + 1);
		printf("D%d: %d ",i+1, D[i]);
	}
		for(index_1=1 ; index_1<=dice_no-1 ; index_1++){
			if(D[index]==D[index_1]){
				complete=1;
				continue;
			}
			else{
				complete=0;
				break;
			}
			}
	printf("\n");	
	}
		printf("In the %d. try your dices rolled the same number.",j);
}

void opt2(int dice_no)
{
	int j, complete=0, i, D[dice_no], index_2, sp_number;
	printf("Choose a number to find in dices = ");
		scanf("%d",&sp_number);
		if(sp_number<1 || sp_number>6)
		while(sp_number<1 || sp_number>6)
		{
			printf("You have to choose a number between 1 and 6, try again = ");
			scanf("%d",&sp_number);
		}
		for(j=0;complete!=1;j++)
		{
		printf("TEST %d -- ", j+1);
		for(i=0;i<dice_no;i++)
		{
		D[i]= ((rand()%6) + 1);
		printf("D%d: %d ",i+1, D[i]);
	}
		for(index_2=0 ; index_2<=dice_no-1 ; index_2++){
			if(D[index_2]==sp_number){
				complete=1;
				continue;
			}
			else{
				complete=0;
				break;
			}
		
	}
	printf("\n");	
	}
		printf("In the %d. try your dices rolled the same number.",j);
}

int main(){
	int opt, dice_no;
	int const index=0;
	srand(time(0)); 
	printf("Welcome to the Dice Program! Choose one of the two options to continue.\n");
    printf("1 - Roll the dices until they get same numbers.\n");
	printf("2 - Roll the dices until they get a spesific number you choose (at least 2 dices)\n");
	printf("Enter your option = ");
	scanf("%d", &opt);
	if(opt!=1 && opt!=2){
	while(opt!=1 && opt!=2)
	{
		printf("You can only choose option 1 or option 2, please choose again = ");
	    scanf("%d", &opt);
	}
}
	printf("Now, please enter how many dice you want to roll = ");
	scanf("%d", &dice_no);
	if(dice_no<2)
	while(dice_no<2)
	{
		printf("You can choose at least 2 dices, please choose again = ");
	    scanf("%d", &dice_no);
	}
	
	if(opt==1)
	opt1(dice_no);
	
	if(opt==2)
	opt2(dice_no);
	
return 0;
}
