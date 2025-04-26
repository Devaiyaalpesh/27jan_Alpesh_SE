#include<iostream>
#include<cstdlib>
using namespace std;

class acopen
{
	public:
	int n1;
	string name,type;
		
	void getdata()
	{
		cout<<"Enter Account number:";
		cin>>n1;
		
		cin.ignore();
		
		cout<<"Enter Account holder name:";
		getline(cin,name);
		
		cout<<"Enter Account detail:";
		cin>>type;
	}
	
};


class deposite:public acopen
{
	public:
	int drs;
	void value()
	{
		
		cout<<"\n Enter Rupees do yo deposite:";
		cin>>drs;
		
	}
};


class withdrawal:public deposite
{
	public:
    int wrs, balance;
	void amount()
	{
	
		cout<<"Enter Rupeesdo you withdrawl:";
		cin>>wrs;
		balance = drs-wrs;
		
		if(balance<2000)
		{
			cout<<"insuficient Balance";
			exit(0);
		}
	}
};
class detail:public withdrawal
{
	public:
	void printdata()
	{
		
		cout<<"-----Account deatils:----";
		
		cout<<"\nAccount Nember Name:"<<n1;
		
		cout<<"\nAccount Holder Name:"<<name;
		
	    cout<<"\nAccount type:"<<type;
	    
	    cout<<"\nbalance amount"<<balance;
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

 

