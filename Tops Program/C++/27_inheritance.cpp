#include<iostream>
using namespace std;
class studinfo
{
	public:
	int id;
	string name;
	
	void getdata()
	{
		cout<<"enter an ID:";
		cin>>id;
		
		cout<<"enter Student Name:";
		cin>>name;
	}
	
};

class result:public studinfo
{
	public:
	void printdata()
   {
     	cout <<"\n ID:"<<id;
		cout <<"\n Name:"<<name;
		
	}
};
main()
{
	result rs;
	rs.getdata();
	rs.printdata();
}
