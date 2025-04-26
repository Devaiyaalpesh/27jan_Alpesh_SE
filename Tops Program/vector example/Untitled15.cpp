
#include<iostream>


main()
{
unsigned int k = 987 , i = 0; 
char trans[10];
do {
trans[i++] =(char) (k%16 > 9 ? k%16 - 10 + 'a' : '\0' );
} while(k /= 16);
printf("%s\n", trans);
}

