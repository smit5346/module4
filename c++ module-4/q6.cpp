//6. Write a C++ program to create a class called Person that has private 
//member variables for name, age and country. Implement member 
//functions to set and get the values of these variables.
#include <iostream>
#include <string>
using namespace std;

class Person 
{
private:
    string name;
    int age;
    string country;

public:
    
    void setName(const string& newName) 
	{
        name = newName;
    }

    void setAge(int newAge) 
	{
        age = newAge;
    }

    void setCountry(const string& newCountry) 
	{
        country = newCountry;
    }

    string getName() const 
	{
        return name;
    }

    int getAge() const 
	{
        return age;
    }

    string getCountry() const 
	{
        return country;
    }
};

int main() {
    Person p1;
    p1.setName("SMIT");
    p1.setAge(30);
    p1.setCountry("INDIA");

    cout << "Name: " << p1.getName() << endl;
    cout << "Age: " << p1.getAge() << endl;
    cout << "Country: " << p1.getCountry() << endl;

    return 0;
}


