#include<iostream>
using namespace std;
class studinfo
{
	int id;
	char name[10];
	
	public:
	void getdata()
	{
		cout<<"enter an ID:";
		cin>>id;
		
		cout<<"enter Student Name:";
		cin>>name;
		
		cout <<"\n ID:"<<id;
		cout <<"\n Name:"<<name;
		
	}
};
main()
{
	studinfo st;
	st.getdata();
}
