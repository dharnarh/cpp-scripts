#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int input_var = 0;

	do
	{
		cout << "Enter a number (-1 = quit): ";
		if (!(cin >> input_var))
		{
			cout << "You entered a non-numeric. Exiting..." << endl;
			cin.clear();
			cin.ignore(20000, '\n');
		}
		if (input_var != -1)
		{
			cout << "You have entered " << input_var << endl;
		}
	} while (input_var != -1);
		cout << "All done." << endl;
	return 0;
}