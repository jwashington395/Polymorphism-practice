#include <iostream>
using namespace std;

class StorageBox 
{
private:
	int item_count;
public:

	void setCount(int item_count) 
	{
		this->item_count = item_count;
	}

	int getItemCount() 
	{
		return item_count;
	}

	StorageBox operator/(int divisor) 
	{
		StorageBox result_box;

		if (divisor != 0) 
		{
			result_box.item_count = item_count / divisor;
		}
		else 
		{
			cout << "Error: Division by zero!" << endl;
			result_box.item_count = 0;
		}

		return result_box;
	}
};

int main() 
{
	StorageBox box1, box2;
	int item_input, divisor_input;

	cout << "Enter item count: ";
	cin >> item_input;

	cout << "Enter divisor: ";
	cin >> divisor_input;

	box1.setCount(item_input);

	box2 = box1 / divisor_input;

	cout << "Items after division: " << box2.getItemCount() << endl;

	return 0;
}