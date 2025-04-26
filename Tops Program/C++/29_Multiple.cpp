#include<iostream>
using namespace std;
int wrs, balance,drs;

class acopen
{
	public:
	int n1;
	string name,type;
		
	void getdata()
	{
		cout<<"Enter Account number:";
		cin>>n1;
		
		cout<<"Enter Account holder name:";
		cin>>name;
		
		cout<<"Enter Account detail:";
		cin>>type;
	}
	
};


class deposite
{
	public:
	//int drs;
	void value()
	{
		
		cout<<"\n Enter Rupees do yo deposite:";
		cin>>drs;
		
	}
};


class withdrawal
{
	public:
    //int wrs, balance;
	void amount()
	{
	
		cout<<"Enter Rupeesdo you withdrawl:";
		cin>>wrs;
		balance = drs-wrs;
		
		if(balance<2000)
		{
			cout<<"insuficient Balance";
		}
	}
};
class detail:public acopen, public deposite, public withdrawal
{
	public:
	void printdata()
	{
		
		cout<<"\nAccount Nember Name:"<<n1;
		
		cout<<"\nAccount Holder Name:"<<name;
		
	    cout<<"\nAccount type:"<<type;
	    
	    cout<<"\n balance amount"<<balance;
	}
};
main()
{
 detail dt;
 dt.getdata();
 dt.value();
 dt.amount();
 dt.printdata();

 
}
