#include<iostream>
using namespace std;

main()
{
	FILE *fl;
	char str[100];
	fl=fopen("stdata.txt","r");
	 //fscanf(fl,"%s",&str);
	// fgets(str,100,fl);
	 
	 while(fgets(str,100,fl))
	 {
	 	
	 	printf("%s\n",str);
     }  
	
	 
}

