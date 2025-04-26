#include<stdio.h>
main()
{
	int id[5],n,i;
    
    printf("Enter number of ID's : ");
    scanf("%d", &n);
    
        
        for(i=0; i<n; i++)
        
    	   {
    	   	  printf("Enter your ID : ");
              scanf("%d", &id[i]);
    		   
		   }
    
        for(i=0; i<n; i++)
        
    	   {
    	   	
    		   printf("ID[%d] = %d\n",i,id[i]);
		   }
}
