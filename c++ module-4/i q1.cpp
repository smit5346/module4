
#include<iostream>
using namespace std;
class Cricketer
{

    public:
    string name;
    int match;
    void inputData1()
	 {
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter number of matches played: ";
        cin >> match;
    }
    void displayData1()
	 {
        cout << "Cricketer's Name: " << name << endl;
        cout << "Matches Played: " << match << endl;
    }

};
class Batsman:public Cricketer
{
	int tr;
    double ar;
    int best_p;
	public :
	void inputdata()
	{
		 cout << "Enter total runs scored: ";
         cin >> tr;
         cout << "Enter best performance (highest score): ";
         cin >> best_p;
	}	
	void calculate_average_runs()
	{
            ar = tr / match;
    }
	void desplay_data()
	{ 
	     displayData1();
		cout << "Total Runs: " << tr << endl;
        cout << "Average Runs: " << ar << endl;
        cout << "Best Performance: " << best_p << endl;
	}
};
int main()
{
	Batsman b1;
	b1.inputData1();
    b1.inputdata();
    b1.calculate_average_runs();
    cout << "\nDisplaying Batsman Data:\n";
    b1.desplay_data();
}

