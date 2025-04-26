#include<stdio.h>
int a,b;
void getvalue()
{
	printf("Enter A");
	scanf("%d", &a);
	
	printf("Enter b");
	scanf("%d", &b);
}
void sum()
{
	printf("sum %d",a+b);
}

void sub()
{
	printf("sub %d",a-b);
}

void mul()
{
	printf("mul %d",a*b);
}


main()
{
	int choice;
    getvalue();
	printf("Enter the Choice Value");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		sum();
		break;
		
	    case 2:
		sub();
		break;
		
		case 3:
		mul();
		break;
		
		default:
	    printf("Enter Invalid Number");
		break;
	
	}
}
