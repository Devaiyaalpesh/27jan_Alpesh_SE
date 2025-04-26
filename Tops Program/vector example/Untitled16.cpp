#include<iostream>

main()
{
struct test
{
char c;
int i;
char m;
} t1;
printf("%d %d\n", sizeof(t1), sizeof(t1.c));
}
