#include<iostream>
using namespace std;
void studentdata()
{
	int english, gujarati,maths,science,total;
	float pr;
	cout<<"Enter English Marks:";
	cin>>english;
	
	cout<<"Enter Gujarati Marks:";
	cin>>gujarati;
	
	cout<<"Enter Maths Marks:";
	cin>>maths;
	
	cout<<"Enter Science Marks:";
	cin>>science;
	
	if(english>= 40 && gujarati>= 40 && maths>=40 && science>=40)
	{
		total= english+gujarati+maths+science;
		cout<<"\n Total:"<<total;
		pr=total/4;
		cout<<"\n Percrntage:"<<pr;
		if(pr>=70)
		{
			cout<<"\n your Grade is A+";
			cout<<"\n Result: Pass";
		}
		
		else if(pr>=60)
		{
			cout<<"\n your Grade is A";
			cout<<"\n Result: Pass";
		}
		
		else if(pr>=50)
		{
			cout<<"\n your Grade is B";
			cout<<"\n Result: Pass";
		}
		
		else if(pr>=40)
		{
			cout<<"\n your Grade is C";
			cout<<"\n Result: Pass";
		}
		
		else
		{
		
			cout<<"Result: FAIL";
		}
	}
}

main()
{
	studentdata();
}
