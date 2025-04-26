#include<iostream>
using namespace std;
main()
{
	int mark[5];
	string sub[5];
	int n,i,total=0,per;
	cout<<"enter number of Subject:";
	cin>>n;
	
	
	for(i=0; i<n; i++)
	{
		cout<<"Enter your Subject:";
		cin>>sub[i];
		
		cout<<"Enter your Marks:";
		cin>>mark[i];
		
		total+=mark[i];	
	}
	
	per=float(total)/float(n);
	
	for(i=0;i<n;i++)
	{
		cout<<"\nSubject["<<i<<"]="<<sub[i];
		cout<<"\nMarks["<<i<<"]="<<mark[i];
	}
	cout<<"\nTotal:"<<total;
	cout<<"\npercentage["<<n<<"]="<<per;
		
	
}
