#include<stdio.h>
int main()

{
	int nm[2][2];
	int j,i;
	printf("enter matrix :");
	
	for(i=0;i<2;i++)
	{
			for(j=0;j<2;j++)
			{ 
			scanf("%d", &nm[i][j]);
			}
    } 
    for(i=0;i<2;i++)
    	{
    		for(j=0;j<2;j++)
			{ 
			printf("%d\t",nm[i][j]);
			}
			printf("\n");
    } 	    
      
}
