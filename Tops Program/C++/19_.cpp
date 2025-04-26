#include<iostream>
using namespace std;

void studentinfo()
{
	FILE *fl;
	int n,i,id;
	char name[10];
	 fl=fopen("stdata.txt","a");
	 cout<<"enter number of Student:";
	 cin>>n;
	 
	 for(i=0; i<=n; i++)
	 {
	 	cout<<"Enter Student ID:";
	 	cin>>id;
	 	
	 	cout<<"Enter student Name:";
	 	cin>>name;
	 	
	 	fprintf(fl,"\n ID: %d",id);
	 	fprintf(fl,"\n Name: %s",name);
     }  
	
	 
}
main()
{
	 studentinfo();
	 
}
