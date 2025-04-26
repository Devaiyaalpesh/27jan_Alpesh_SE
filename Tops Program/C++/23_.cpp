#include<iostream>
#include<fstream>
using namespace std;

main()
{
   ifstream myfile("new.txt");
   string str;
   getline(myfile,str);
   cout<<str<<"\n";
   
}
