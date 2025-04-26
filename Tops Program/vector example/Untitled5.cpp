#include<iostream>
#define MAX 3
main()
{
printf("MAX = %d \n",MAX );
#undef MAX
#ifdef MAX
printf("Vector Institute”);
#endif
}
