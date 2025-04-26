#include<stdio.h>
	int i,n,id[10];
	char name[10][10];
	
void getdata()
{

	for(i=0; i<n; i++)
	{
	
		
	printf("\n\nEnter Student ID:");
	scanf("%d", &id[i]);

	printf("enter Student Name:");
	scanf("%s", &name[i]);
	
    }
}
void prntdata()
{
	for(i=0; i<n; i++)
	{	
	printf("\n\nEnter Student ID:\n", id[i]);

	printf("enter Student Name:\n", name[i]);
	
    }
    
}


 int main()
{
		printf("enter Number of studen:");
	    scanf("%d", &n);
	    getdata();
	    prntdata();

}
