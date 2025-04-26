#include<stdio.h>
int main()

{
    int nm[5], final[5];
	int n,i,j,sum=0,ans,add;
	printf("Enter Choice Number:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	 {
		nm[i] =i+1;
		add=nm[i]+1;
	    printf("\n I after value: %d", nm[i]);
	  	sum=nm[i]+add;
	  	 printf("\n sum value: %d", sum);
	  	 final[i]=sum;
	  }
    
	printf("\n ans Final value: %d", sum);
          
}
