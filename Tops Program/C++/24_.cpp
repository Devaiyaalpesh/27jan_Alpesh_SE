#include<iostream>
#include<fstream>
using namespace std;

main()
{
   ifstream myfile("new.txt");
   string str;
   while(getline(myfile,str))
   {
   	cout<<str<<"\n";
   
   }
   
}
