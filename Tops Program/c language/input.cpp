#include<stdio.h>
int main()
{
	char name[10];
	int age;
    double mobile;
    
	printf("Enter an age:");
	scanf("%d",&age);
	
	printf("enter Name:");
	scanf("%s",&name);
	
	printf("Enter moblie:");
	scanf("%lf",&mobile)
	
	printf("\nAge:%d",age);
	printf("\nName:%s",name);
	printf("\nMoble:%.0lf",mobile);
	
}

