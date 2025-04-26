#include<stdio.h>
main()
{
	int id;
	char nm[50];
	FILE *myfile;
	myfile=fopen("temp.txt","a");  //file creating
	
	
	printf("Enter ID:");
	scanf("%d",&id);
	
	
	printf("Enter Name:");
	scanf("%s",&nm);
	
		
	fprintf(myfile,"ID:%d", id);
	fprintf(myfile,"\nName:%s", nm);
	
	fprintf(myfile,"\n-------------------------------------\n");
	
}
