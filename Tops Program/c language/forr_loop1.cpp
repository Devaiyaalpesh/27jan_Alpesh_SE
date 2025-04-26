#include<stdio.h>
main()
{
	int i, num1, num2, choice, a=5;
	printf("Enter Number1:");
	scanf("%d", & num1);
	
	printf("Enter Number2:");
	scanf("%d", & num2);
	
	printf("Enter Choice Number:");
	scanf("%d", &choice);
	
	
//	for(i=choice;i<=4;i++)
//	{
//	
//		printf("%d + %d = %d \n",num1,num2,num1+num2);
//		i++;
//		printf("%d - %d = %d \n",num1,num2,num1-num2);
//		i++;
//		printf("%d * %d = %d \n",num1,num2,num1*num2);
//		i++;
//		printf("%d / %d = %.2f \n",num1,num2,float(num1)/float(num2));
//		i++;	
//	}

    while(choice<=4)
    {

	  printf("%d + %d = %d \n",num1,num2,num1+num2);
	  choice++;
    
	  printf("%d - %d = %d \n",num1,num2,num1-num2);
  	  choice++;
       
	  printf("%d * %d = %d \n",num1,num2,num1*num2);
	  choice++;
  
  	  printf("%d / %d = %.2f \n",num1,num2,float(num1)/float(num2));
  	  choice++;
    }
    
	printf("invalid Choice Error!");
	
}
