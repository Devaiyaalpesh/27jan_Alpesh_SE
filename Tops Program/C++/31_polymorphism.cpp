#include<iostream>
using namespace std;

class hospital
	{
		public:
			void pdata(int id,string nm)
			{
			
				cout<<"\n P.ID:"<<id;
				cout<<"\n p.Name:"<<nm;
			
			}
	};
	
class medical:public hospital
{
		public:
			void pdata(int id,string nm)
			{
			
				cout<<"\n P.ID:"<<id;
				cout<<"\n p.Name:"<<nm;
			
			}
	};
class dr:public hospital
{
        public:
			void pdata(int id,string nm)
			{
			
				cout<<"\n P.ID:"<<id;
				cout<<"\n p.Name:"<<nm;
			
			}
	};	
main()
{
	dr d;
	medical m;
	d.pdata(101,"alpesh");
	m.pdata(102,"Rajesh");

}
