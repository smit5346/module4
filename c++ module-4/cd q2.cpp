//Write a program of Addition, Subtraction, Division, Multiplication using 
//constructor.

#include <iostream>
using namespace std;

class Cal
{ 
   public:
	Cal(int a,int b)
	{
		cout<<"\n Addition : "<<a+b;
		cout<<"\n Subtraction : "<<a-b;
		cout<<"\n Multiplication : "<<a*b;
		cout<<"\n Division : "<<a/b;
		
	}
	
};
int main() {
    int a, b;
  cout << "Enter two numbers: ";
    cin >> a >> b;
    Cal c(a, b);

    


    return 0;
}

