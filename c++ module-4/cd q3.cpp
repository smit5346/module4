//Write a C++ program to create a class called Car that has private 
//member variables for company, model, and year. Implement member 
//functions to get and set these variables.
#include <iostream>
#include <string>
using namespace std;
class Car
{
	int year;
	string company,model;
	public :
		
		void setdata(int year,string company,string model)
		{
			this->company=company;
			
			this->model=model;
			
			this->year=year;
			
		}
		void getdata()
		{
			cout<<"\n Car company ="<<company;
			
			cout<<"\n Car model ="<<model;
			
			cout<<"\n Car Year = "<<year;
		}
};
int main()
{
	Car c;
	int year;
	string company,model;
	cout<<"\n Enter Car Company = ";
	cin>>company;
	cout<<"\n Enter Car Model = ";
	cin>>model;
	cout<<"\n Enter Year = ";
	cin>>year;
	c.setdata(year,company,model);
	c.getdata();
	return 0;
}
