#include<stdio.h>
void getdata()
{
	int id;
	char name[10];
	
	printf("\n\nEnter Student ID:");
	scanf("%d", &id);

	printf("enter Student Name:");
	scanf("%s", &name);
	
    printf("\nID:%d",id);
    printf("\nName:%s",name);
	
}
int main()
{
    int n,i;
    printf("enter Number of studen:");
	scanf("%d", &n);

	for (i=1; i<=n; i++)
	{
	    getdata();
    }
}
