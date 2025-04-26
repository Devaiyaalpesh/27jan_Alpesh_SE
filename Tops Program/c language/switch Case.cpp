#include<stdio.h>
main()
{
	int num1, num2, choice, sum, mul, sub;
	float div;
	
	printf("enter Number1:");
	scanf("%d", &num1); 
	
	printf("enter Number2:");
	scanf("%d", &num2);
	
    printf("enter Choice Number:");
	scanf(" %d", &choice);
	
	switch(choice)
	{
		case 1:
		sum=num1+num2;
		printf("Sumation is: %d", sum);
		break;
		
		case 2:
		sub=num1-num2;
		printf("Subtraction is: %d", sub);
		break;
		
		case 3:
		mul=num1*num2;
		printf("Multiplication is: %d", mul);
		break;
		
	    case 4:
		div=float(num1)/float(num2);
		printf("Subtraction is: %.2f", div);
		break;
		
		default:
		printf("Invalid Choice!");
		break;	
		
	}
}
	
	
	
