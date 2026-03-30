#include <iostream>
using namespace std;

class BillCalculator 
{
public:
	int calculateBill(int burger_price, int pizza_price) 
	{
		return burger_price + pizza_price;
	}
	double calculateBill(double food_total, double tax_rate) 
	{
		return food_total + (food_total * tax_rate);
	}

	double calculateBill(double food_total, double tax_rate, double discount) 
	{
		return (food_total + (food_total * tax_rate)) - discount;
	}
};

int main() 
{
	BillCalculator calc_1;
	int burger_cost, pizza_cost;
	double tax_rate, discount;

	cout << "Enter burger price: $";
	cin >> burger_cost;

	cout << "Enter pizza price: $";
	cin >> pizza_cost;

	cout << "Enter tax rate: ";
	cin >> tax_rate;

	cout << "Enter discount amount: ";
	cin >> discount;

	int food_total = calc_1.calculateBill(burger_cost, pizza_cost);
	double total_with_tax = calc_1.calculateBill((double)food_total, tax_rate);
	double final_total = calc_1.calculateBill((double)food_total, tax_rate, discount);

	cout << "Food total: $" << food_total << endl;
	cout << "Total With Tax: $" << total_with_tax << endl;
	cout << "Total After Tax and Discount: $" << final_total << endl;

	return 0;
}