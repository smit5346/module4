#include<iostream>
using namespace std;
class  Date
{
	public :
		int day,month,year;
		Date()
		{
			cout<<"Enter Day ";
			cin>>day;
			cout<<"Enter Month ";
			cin>>month;
	 		cout<<"Enter Year ";
			cin>>year;
			
			if(month==1 || month==3 ||month==5 || month==7 || month==8 || month==10 ||month==12)
			{
				if(day<=31)
				{
				cout<<"Date is valid";
				}
				else 
				{
					cout<<"Date is not valid";
				}
			}
		else if(month==4 || month==6 ||month==9 || month==11)
			{
				if(day<=30)
				{
					
				
				cout<<"Date is valid";
				}
				else 
				{
					cout<<"Date is not valid";
				}
			}
			else if(month == 2)
			{
				if(year%400==0)
				{
				if(day<=29)
				{
					cout<<"Date is valid";
				}
				
			}
				
			}


			
		}
 } ;
 int main()
 {
 	Date d1;
 	
 	return 0;;
 }
