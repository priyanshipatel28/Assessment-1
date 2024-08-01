//assessment//do-while
/*Create menu driven calculator using function.*/
//without return type and without argument
#include<stdio.h>
void calculator();
int main()
{
	calculator();
	return 0;
	
}
void calculator()
{
	char yes;
	yes = 'y';
	while(yes == 'y') 
	{
	
	again:
	printf("----------------MENU----------------");
	printf("\n1. Addition");
	printf("\n2. Substraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	int calc,Addition=0,Subtraction=0,Multiplication=1,i;
	int num1,num2;
	float n1,n2,Division;
	
	printf("\n\nEnter your choice: ");
	scanf("%d",&calc);
	
	switch(calc)
	{
		case 1:
			//int num1, num2;
			printf("\nEnter first number : ");
			scanf("%d",&num1);
			
			printf("\nEnter second number : ");
			scanf("%d",&num2);
			
			Addition = num1 + num2;
			printf("\nAddition = %d",Addition);
			
		break;
		case 2:
			//int num1, num2;
			printf("\nEnter first number : ");
			scanf("%d",&num1);
			
			printf("\nEnter second number : ");
			scanf("%d",&num2);
			
			Subtraction = num1 - num2;
			printf("\nSubtraction = %d",Subtraction);
			
		break;
		case 3:
			//int num1, num2;
			printf("\nEnter first number : ");
			scanf("%d",&num1);
			
			printf("\nEnter second number : ");
			scanf("%d",&num2);
			
			Multiplication = num1 * num2;
			printf("\nMultiplication = %d",Multiplication);
			
		break;
		case 4:
			//num1, num2;
			printf("\nEnter first number : ");
			scanf("%f",&n1);
			
			printf("\nEnter second number : ");
			scanf("%f",&n2);
			
			Division = n1 / n2;
			if (n2 != 0)
			{
				printf("\nDivision = %.2f",Division);
			}
			else
			{
				printf("\ndenominator value of n2 can't be zero!, /*INVALID INPUT FOR n2*/ ");
			}
			
		break;
	
	default:
		printf("INVALID VALUE !!!");
	}	
				printf("\nDo you like to continue'y'  or not'n' :");
		
				
			
					if ( yes == 'y' && yes != 'n')
					{
						scanf(" %c",&yes);
					}
	}
		printf("thank you");				
}
