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
			int id;
			string nm;
			void pdata()
			{
	
				cout<<"\n P.ID:";
				cin>>id;
				
				cout<<"\n p.Name:";
				cin>>nm;
			
				cout<<"\n P.ID:"<<id;
				cout<<"\n p.Name:"<<nm;
			}
	};
class dr:public hospital
{
        public:
			int id;
			string nm;
			void pdata()
			{
	
				cout<<"\n P.ID:";
				cin>>id;
				
				cout<<"\n p.Name:";
				cin>>nm;
				
				cout<<"\n P.ID:"<<id;
				cout<<"\n p.Name:"<<nm;
				
			
			}
	};	
main()
{
    dr d;
	d.pdata();
}
	

	

