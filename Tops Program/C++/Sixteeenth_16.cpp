#include<iostream>
using namespace std;
struct studinfo
{ 
   int id;
   string name;
}st[5];
main()
{
	 int n,i;
	 cout<<"enter number of student:",
	 cin>>n;
	 
	 for(i=0; i<n; i++)
	 {
	 	cout<<"Enter an ID:";
	 	cin>>st[i].id;
	 	
	 	cout<<"Enter an Name:";
	 	cin>>st[i].name;
	 	
	 }
	 
	 for(i=0; i<n; i++)
	 {
	 	cout<<"\n ID:"<<st[i].id;
	    cout<<"\n Name:"<<st[i].name;
	 }
	 
}

