#include<iostream>
main()
{
char as[] = "\\0\0";
int i = 0;
do{
switch( as[i++]) {case '\\' : printf("A");
break;
case 0 : printf("B"); 
break;
default : printf("C");
break;
}
}while(i<3);
}
