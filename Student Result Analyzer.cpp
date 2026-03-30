#include <iostream>
using namespace std;

class ResultAnalyzer 
{
public:
	int calculateResult(int mark1, int mark2) 
	{
		return mark1 + mark2;
	}

	int calculateResult(int mark1, int mark2, int mark3) 
	{
		return mark1 + mark2 + mark3;
	}

	double calculateResult(double total_marks, int subjects) 
	{
		return total_marks / subjects;
	}
};

int main() 
{
	ResultAnalyzer analyzer_1;
	int mark1, mark2, mark3;

	cout << "Enter mark 1: ";
	cin >> mark1;

	cout << "Enter mark 2: ";
	cin >> mark2;

	cout << "Enter mark 3: ";
	cin >> mark3;

	cout << endl;

	cout << "Total of 2 subjects: " << analyzer_1.calculateResult(mark1, mark2) << endl;

	int total_marks = analyzer_1.calculateResult(mark1, mark2, mark3);
	double average_marks = analyzer_1.calculateResult((double)total_marks, 3);

	cout << "Total of 3 subjects: " << total_marks << endl;
	cout << "Average marks: " << average_marks << endl;

	return 0;
}