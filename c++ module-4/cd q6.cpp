#include <iostream>
#include <string>
using namespace std;

class Employee 
{
private:
    string name;
    int empID;
    double salary;

public:
    Employee(string empName, int ID, double empSalary) 
	{
        name = empName;
        empID = ID;
        salary = empSalary;
    }


    void setSalary(char performance) 
	{
        double percentage;


        switch(performance) 
		{
            case 'A':
                percentage = 0.20;  
                
                break;
            case 'B':
                percentage = 0.10;  
                break;
            case 'C':
                percentage = 0.05;  
                break;
            default:
                percentage = 0.0;   
                break;
        }

        salary += salary * percentage;
    }

    void displayEmp() 
	const
	 {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Salary: $" << salary << endl;
    }
};

int main() 
{
    
    Employee emp1("Smit", 5346, 50000.00);


    cout << "Initial Employee Details:" << endl;
    emp1.displayEmp();

    char performance;
    cout << "\nEnter performance grade (A, B, C, etc.): ";
    cin >> performance;
    emp1.setSalary(performance);

    
    cout << "\nUpdated Employee Details:" << endl;
    emp1.displayEmp();

    return 0;
}

