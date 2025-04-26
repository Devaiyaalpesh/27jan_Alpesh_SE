#include<stdio.h>
main()
{
	FILE *file;
	char str[100];
	file=fopen("temp.txt","r");
	while(fgets(str,100,file))
      {
      	printf("%s",str);
      }
}
