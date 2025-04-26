#include<iostream>
using namespace std;
main()
{
	int stdid[5];
	int n,i;
	cout<<"enter number of student:";
	cin>>n;
	
	
	for(i+0; i<n; i++)
	{
		cout<<"Enter your Id:";
		cin>>stdid[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<"\nID["<<i<<"]="<<stdid[i];
	}
}
