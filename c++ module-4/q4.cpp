#include <iostream>
using namespace std;

class Rectangle 
{
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Function to calculate the area of the rectangle
    double calculateArea() const
	{
        return length * width;
    }

    // Function to calculate the perimeter of the rectangle
    double calculatePerimeter() const 
	{
        return 2 * (length + width);
    }

    // Function to display the length, width, area, and perimeter
    void display() const 
	{
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() 
{
    int length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rect(length, width);
    rect.display();

    return 0;
}

