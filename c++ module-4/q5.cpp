#include <iostream>
using namespace std;


class Person 
{
private:
    string name;
    int age;
    string country;

public:
    void setName(const string& n) 
	{
        name = n;
    }

    string getName() const 
	{
        return name;
    }

    
    void setAge(int a) 
	{
        if (a > 0) 
		{
            age = a;
        }
		 else 
		{
            cerr << "Error: Age must be positive!" << endl;
        }
    }

    int getAge() const 
	{
        return age;
    }

    void setCountry(const string& c) 
	{
        country = c;
    }

    string getCountry() const 
	{
        return country;
    }

    
    void display() const 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

int main() 
{
    Person person;

    person.setName("Smit");
    person.setAge(20);
    person.setCountry("INDIA");


    person.display();

    cout << "Getting values individually:" << endl;
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;
}

