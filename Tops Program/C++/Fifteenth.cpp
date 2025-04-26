#include<iostream>
using namespace std;
void calc()
{
	
	int choice, x,y,add,mul,div,sub;
	char ch;
	do
	{
	
		cout<<"enter choice value: ";
		cin>>choice;
		
		
		cout<<"enter value of X: ";
		cin>>x;
		
		cout<<"enter vlue of Y: ";
		cin>>y;
		
		switch(choice)
		
		   {
				case 1:
				add=x+y;
				cout<<"\n SUM:"<<add;
				break;
				
				case 2:
				mul=x*y;
				cout<<"\n MUL:"<<mul;
				break;
				
				case 3:
				div=float(x)/float(y);
				cout<<"\n DIVISION:"<<div;
				break;
				
				case 4:
				sub=x-y;
				cout<<"\n Subtraction:"<<sub;
				break;
				
				default:
				cout<<"\n Wrong Choice";
				break;
				
	       }
		  cout<<"Do you Want Contionue";
	      cin>>ch;
	
    } 
	while(ch == 'Y' ||ch=='y');
}

int main()
  {
	calc();
  }
