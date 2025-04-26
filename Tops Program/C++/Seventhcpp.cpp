#include<iostream>
using namespace std;
void table()
{
	int choice,i=1,mul;
	
	cout<<"Enter choice number:";
	cin>>choice;

 
	while(i<=10)
	{
		
		mul= choice*1;
		cout<<choice << "*"<<i<<"=" << mul<<"\n";
		i++;
    }

}

main()
{
	table();
}
