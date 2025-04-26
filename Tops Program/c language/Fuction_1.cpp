#include<stdio.h>
int a,b,choice;
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


int main()
{
	printf("Enter the value of A And B");
	scanf("%d%d",&a,&b);
	
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
	
	}
}
