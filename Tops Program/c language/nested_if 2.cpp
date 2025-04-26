#include<stdio.h>
main()
{
	int num1, num2, sum, mul;
	
	printf("enter Number1:");
	scanf("%d", &num1); 
	
	printf("enter Number2:");
	scanf("%d", &num2);
	
	if(num1!=0 || num2!=0)
	{
		if(num1>=num2)
		{
		    sum = num1+ num2;
		    printf("\nSum is%d", sum);
		}
		else
		{ 
		    mul= num1*num2;
		    printf("\nMulis %d", mul);
		}
	}
	else
	{
		printf("ERROR");
	}
}
