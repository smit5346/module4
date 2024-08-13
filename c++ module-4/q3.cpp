#include <iostream>
using namespace std;

class Circle
 {
private:
    double radius;

public:
    
    Circle(double r) : radius(r) {}

    
    double calculateArea() const 
	{
        return 3.14 * radius * radius;
    }

    
    double calculateCircumference() const 
	{
        return 2 * 3.14 * radius;
    }

    
    void display() const 
	{
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Circumference: " << calculateCircumference() << endl;
    }
};

int main() 
{
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    Circle circle(r);
    circle.display();

    return 0;
}

