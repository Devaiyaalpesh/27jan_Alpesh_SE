#include<iostream>
using namespace std;
class calc
{
	public:
	int n1, n2;

		
	void getdata()
	{
		cout<<"enter numner1:";
		cin>>n1;
		
		cout<<"enter number2:";
		cin>>n2;
	}
	
};

class output:public calc
{
	public:
	void result()
	{
		int sum, mul,sub;
		float div;
		sum =n1+n2;
     	cout <<"\n Sum:"<<sum;
     	
     	mul =n1*n2;
     	cout <<"\n Mul:"<<mul;
     	
     	div =float(n1)/float(n2);
     	cout <<"\n Div:"<<div;
     	
     	sub =n1-n2;
     	cout <<"\n Sub:"<<sub;
	}
};
main()
{
	output rs;
	rs.getdata();
	rs.result();
}
