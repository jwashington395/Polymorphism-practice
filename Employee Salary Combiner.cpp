#include <iostream>
using namespace std;

class EmployeeSalary 
{
private:
	double salary;
public:
	void setSalary(double salary) 
	{
		this->salary = salary;
	}

	double getSalary() 
	{
		return salary;
	}

	EmployeeSalary operator+(EmployeeSalary second_employee) 
	{
		EmployeeSalary result_employee;

		result_employee.salary = salary + second_employee.salary;

		return result_employee;
	}

	bool operator>(EmployeeSalary second_employee) 
	{
		if (salary > second_employee.salary) 
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
};

int main() 
{
	EmployeeSalary employee1, employee2, total;
	double input1, input2;

	cout << "Enter employee 1 salary: $";
	cin >> input1;

	cout << "Enter employee 2 salary: $";
	cin >> input2;

	employee1.setSalary(input1);
	employee2.setSalary(input2);

	total = employee1 + employee2;

	cout << endl;

	cout << "Total salary: $" << total.getSalary() << endl;

	if (employee1 > employee2) 
	{
		cout << "First employee has higher salary." << endl;
	}
	else 
	{
		cout << "Second employee has higher salary." << endl;
	}

	return 0;
}