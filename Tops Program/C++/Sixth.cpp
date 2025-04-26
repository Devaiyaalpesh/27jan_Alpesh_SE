#include<iostream>
using namespace std;
void calculator()
{
	int choice,nm1,nm2;
	
	cout<<"Enter choice number:";
	cin>>choice;
	
	cout<<"Enter First number:";
	cin>>nm1;
	
	cout<<"Enter Second number:";
	cin>>nm1;
	 
	switch(choice)
	{
		case 1:
		cout<<"\n sum :"<<nm1+nm2;
		break;
		
		case 2:
		cout<<"\n mul :"<<nm1*nm2;
		break;
		
		case 3:
		cout<<"\n div :"<<nm1/nm2;
		break;
		
		case 4:
		cout<<"\n sub :"<<nm1-nm2;
		break;
		
		default:
		cout<<"wrong choice";
		break;
    }

}

main()
{
	calculator();
}
