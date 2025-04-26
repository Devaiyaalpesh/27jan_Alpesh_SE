#include<stdio.h>
void getdata()
{
	int i,n,id;
	char nm[10];
	FILE *file;
    file=fopen("file with fuction.txt","a"); 
	
	printf("enter nember of sudent:");
	scanf("%d",&n);
	
	
	for (i=0; i<n; i++)
	{  
	   	printf("enter id of sudent ID:");
	    scanf("%d",&id);
	               
	    printf("enter id of sudent Name:");
	    scanf("%s",&nm);
	        
	    fprintf(file,"ID:%d\n",id);
	           
	    fprintf(file,"Name:%s\n",nm);
	        
	    fprintf(file,"\n==============================\n");
	   
	}
	
	
}
main()
{ 
      	getdata();
}
