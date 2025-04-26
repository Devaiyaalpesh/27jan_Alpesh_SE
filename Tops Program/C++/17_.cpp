#include<iostream>
using namespace std;
struct studinfo
{ 
   int mark;
   string sub;
}st[5];
void marksheet()
{
	int n,i, total=0;
	 float per;
	 cout<<"enter number of Subject:",
	 cin>>n;
	 
	 for(i=0; i<n; i++)
	 {
	 	cout<<"Enter Subject:";
	 	cin>>st[i].sub;
	 	
	 	cout<<"Enter an Marks:";
	 	cin>>st[i].mark;
	 	total+= st[i].mark;	
	 }
	 	  per=total/n;
	 
	 for(i=0; i<n; i++)
	 {
	 	cout<<"\n sub:"<<st[i].sub;
	    cout<<"\n Mark:"<<st[i].mark;
	  
	 }
	    cout<<"\n Total"<<total;
	    cout<<"\n Percentage"<<per;
	 
}
main()
{
	 marksheet();
	 
}

