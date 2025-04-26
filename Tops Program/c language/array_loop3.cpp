#include<stdio.h>
int main()

{
	int nm[5];
	int sum=0,n,i;
	printf("enter Number:");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		nm[i]=i+1;
	    sum= sum+nm[i];
    } 
	printf("\n=%d",sum);
	    
      
}
