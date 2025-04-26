#include<iostream>

int main()
{
int *ptr=(int*)malloc(sizeof(int));

*ptr=4;

printf("%d",(*ptr)+++*ptr++);

}



