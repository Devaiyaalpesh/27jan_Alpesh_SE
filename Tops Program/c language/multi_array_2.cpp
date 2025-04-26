#include<stdio.h>
int main()

{
	char nm[5][10];
	char id[5];
	int n,i,j=1;
	printf("enter Number of Student:");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	  {
	  	printf("Enter Student ID:");
	  	scanf("\n %d", &id[i]);
	
      }
      for(i=0;i<n;i++)
	  {
	  	printf("Enter Student Name:");
	  	scanf("\n %s", &nm[i]);
      }
	    for(i=0;i<n;i++) 
	    { 
	    printf("\nID:[%d] = %d", i+1,id[i]);
	  	printf("\nName:[%d] = %s", i ,nm[i]);
	  	printf("\n - - - -");
	    }
      
}
