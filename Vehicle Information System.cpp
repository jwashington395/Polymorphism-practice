#include <iostream>
using namespace std;

class Vehicle 
{
public:
	void showType() 
	{
		cout << "Vehicle is used for transportation.\n";
	}
};

class Car : public Vehicle 
{
public:
	void showType() 
	{
		cout << "Car is a four-wheeled vehicle.\n";
	}
};

class Bike : public Vehicle 
{
public:
	void showType() 
	{
		cout << "Bike is a two-wheeled vehicle.\n";
	}
};

int main() 
{
	Car car1;
	Bike bike1;

	bike1.showType();
	car1.showType();

	Vehicle* vehicle_pointer;
	vehicle_pointer = &car1;
	vehicle_pointer->showType();

	return 0;
}