#include<stdio.h>
int getsum(int a, int b)
{
	return a+b;
}
main()
{
	int ans,a,b;
	printf("enter A");
	scanf("%d",&a);
	
	printf("enter B");
	scanf("%d",&b);
	
	ans=getsum(a,b);
    printf("\n Sum:%d", ans);
	
}

