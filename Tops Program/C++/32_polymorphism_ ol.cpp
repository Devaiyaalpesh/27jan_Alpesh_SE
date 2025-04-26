#include<iostream>
using namespace std;

class hospital
	{
		public:
			void pdata(int id)
			{
				cout<<"\n P.ID:"<<id;
			}
			
		    void pdata(string nm)
			{
			
				cout<<"\n p.Name:"<<nm;
			
			}
	};
	

main()
{
	hospital h;
    h.pdata("rajesh");
    h.pdata(12);

}
