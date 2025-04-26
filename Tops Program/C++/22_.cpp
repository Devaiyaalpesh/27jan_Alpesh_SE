#include<iostream>
#include<fstream>
using namespace std;

main()
{
   ofstream myfile("new.txt",ios::app);
   int id,n,i;
   string nm;
   
   cout<<"Enter Nember Of Student";
   cin>>n;
   
   for(i=0; i<n; i++)
   {
   
   cout<<"Enter ID:";
   cin>>id;
   
   cout<<"Enter NAME:";
   cin>>nm;
   
   myfile<<"\n ID:"<<id;
   myfile<<"\n NAME"<<nm;
  }
}

