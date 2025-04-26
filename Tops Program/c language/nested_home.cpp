#include<stdio.h>
main()
{
	int num1, num2, sum, mul, sub;
	float div;
	char choice;
	
	printf("enter Number1:");
	scanf("%d", &num1); 
	
	printf("enter Number2:");
	scanf("%d", &num2);
	
    printf("enter Choice Number:");
	scanf(" %c", &choice);
	
	
	
		if(choice=='+')
		{
		    sum = num1+ num2;
		    printf("\n Sumation is: %d", sum);
		}
		else if (choice=='-')
		{ 
		    sub= num1-num2;
		    printf("\n Subtraction is: %d", sub);
		}
		else if (choice=='*')
		{ 
		    mul= num1*num2;
		    printf("\nMultiplication is: %d", mul);
		}
		else if (choice=='/')
		{ 
		    div=float(num1)/float(num2);
		    printf("\nDivision is: %.2f", div);
		}
	
	else
	{
		printf("Invalid choice Number");
	}
}
