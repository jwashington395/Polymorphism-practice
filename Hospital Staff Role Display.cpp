#include <iostream>
using namespace std;

class Staff 
{
public:
	void showRole() 
	{
		cout << "Staff Role\n";
	}
};

class Doctor : public Staff 
{
public:
	void showRole() 
	{
		cout << "Doctor treats patients and gives prescriptions.\n";
	}
};

class Nurse : public Staff 
{
public:
	void showRole() 
	{
		cout << "Nurse cares for patients and assists doctors.\n";
	}
};

int main() 
{
	Doctor doctor1;
	Nurse nurse1;

	doctor1.showRole();
	nurse1.showRole();

	return 0;
}