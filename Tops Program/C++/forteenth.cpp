#include<iostream>
using namespace std;
int n1,n2;

void add(int a, int b)
    { 
      cout<<"\n sum:"<<a+b;
	}
	
void sub(int a, int b)
    { 
      cout<<"\n sub:"<<a-b;
	}
	
void mul(int a, int b)
    { 
      cout<<"\n mul:"<<a*b;
	}
	

int main()
{
	cout<<"Enter number1";
	cin>>n1;
	
	cout<<"Enter number2";
	cin>>n2;
	
	add(n1,n2);
	sub(n1,n2);
	mul(n1,n2);
}
