#include<stdio.h>
struct studinfo
{
	int id;
	char nm[10];
}st[10];
 int main()
{
	int n,i;
	printf("enter an number of Stdent:");
	scanf("%d",&n);
	
	
	for(i=0;i<n; i++)
	{
	
	printf("enter an ID:");
	scanf("%d",&st[i].id);
	
	printf("enter an Name:");
	scanf("%s",&st[i].nm); 
	}
   
   	for(i=0;i<n; i++)
	{
	
	printf("\n enter an ID: %d", st[i].id);
	
	printf("\n enter an Name: %s", st[i].nm);
	
   }
}
