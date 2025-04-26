#include<iostream>
using namespace std;
main()
{
	int sub[5];

	int n,i,total=0;
	float per;
	
	cout<<"enter number of Subject:";
	cin>>n;
	
	
	for(i=0; i<n; i++)
	{
	
		cout<<"Enter your Marks:";
		cin>>sub[i];
		
		total+=sub[i];	
	}
	
	cout<<"\nTotal:"<<total;
	per=total/n;
	cout<<"\npercentage:"<<per;
		
	
}
