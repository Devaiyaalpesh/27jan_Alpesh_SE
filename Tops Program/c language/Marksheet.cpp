#include<stdio.h>
main()
{
	int gujarati, sanskrit, english, science, total;
	float percentage;
	printf("enter Gujarati Marks:");
	scanf("%d",&gujarati);
	
	printf("enter Sanskrit Marks:");
	scanf("%d",&sanskrit);
	
	printf("enter English Marks:");
	scanf("%d",&english);
	
	printf("enter Science Marks");
	scanf("%d",&science);
	
	total=gujarati+sanskrit+english+science;
	printf("\Total %d",total);
	
	percentage=(total/4);
	printf("\n Percentage:%.2f",percentage);
	
	if (percentage>=70)
	{
		printf("\nResult:grage is A+");
	}
	
     else if (percentage>=60)
	{
		printf("\nResult:grage is A");
	}
	
	 else if(percentage>=50)
	{
		printf("\nResult:grage is B");
	}
	
	 else if(percentage>=40)
	{
		printf("\nResult:grage is C");
	}
      else 
	{
		printf("\n Result:FAIL");
    }
	
}
