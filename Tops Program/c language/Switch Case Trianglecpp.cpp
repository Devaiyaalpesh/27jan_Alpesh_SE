#include<stdio.h>
main()
{
	int choice, square, rectangle, side, height, base, width, length;
	float Pi=3.14, triangle;
	
	printf("/n1. Area of Square");
	printf("/n2. Area of Triagle");
	printf("/n3. Area of Rectangle");
	
    printf("enter Choice Number:");
	scanf(" %d", &choice);
	
	switch(choice)
	{
		case 1:
		printf("Enter Side:");
		scanf("%d", &side);
		square= side*side;
		printf("\n value of Square is: %d", square);
		break;
		
		case 2:
		printf("Enter Height");
		scanf("%d", &height);
		
		printf("Enter Base");
		scanf("%d", &base);
		
		triangle= 0.5*height*base;
		printf("\n value of Triagle is: %.2f", triangle);
		break;
		
		
		case 3:
		printf("Enter Width");
		scanf("%d", &width);
		
		printf("Enter Length");
		scanf("%d", &length);
		
		rectangle= width*length;
		printf("\n value of Rectangle is: %d", rectangle);
		break;
		
		
		default:
		printf("Invalid Choice!");
		break;	
		
	}
}
	
	
	
