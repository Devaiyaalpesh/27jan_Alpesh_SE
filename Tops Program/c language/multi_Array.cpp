#include<stdio.h>
int main()

{
	char nm[5][10]; 
	int n,i;
	printf("enter Number of Student:");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	  {
	  	printf("Enter Student name:");
	  	scanf("\n %s", &nm[i]);
      }
	    for(i=0;i<n;i++) 
	    { 
	  	printf("\nName:[%d] = %s", i ,&nm[i]);
	    }
      
}
