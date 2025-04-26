#include<stdio.h>
main()
{
	int n, j, table,i;

	FILE *myfile;
	myfile=fopen("Table.txt","a");  //file creating
	
	
	printf("Enter how many Table do you want print:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
			printf("Enter your Table:");
	        scanf("%d",&table);
		
			printf("Table of %d\n", table);
		    printf("------------------------------\n");
		    
		    fprintf(myfile,"Table of %d\n", table);
		    fprintf(myfile,"------------------------------\n");
		    
		    for(j=1; j<=10;j++)
		    {
		    	printf("%d*%d  =%d\n", table,j,table*j);
		    	fprintf(myfile,"%d*%d  =%d\n", table,j,table*j);
		   }
	      
	        printf("\n-------------------\n");
		    fprintf(myfile,"\n------------------------------\n");
		
	}
	
	

}
