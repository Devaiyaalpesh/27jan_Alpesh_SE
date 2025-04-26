#include<iostream>
main()
{
FILE *fs;
char c[10];
fs = fopen(“source.txt”, ”r”); /* source.txt exists and contains “Vector Institute” */
fseek(fs,0,SEEK_END);
fseek(fs,-3L,SEEK_CUR);
fgets(c,5,fs);
puts(c);
}

