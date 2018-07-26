
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	int guess = 0;
	int secret;
	srand(time(NULL));
	secret = (rand() % 50);

	do
	{
		cout << "Input the guess number (range 1 to 50): ";

		if (!(cin >> guess))
		{
			cout << "Please enter an integer number, try again!\n";
			cin.clear();
			cin.ignore(100, '\n');
		}
		if (guess < secret)
		{
			cout << "Your input is lesser than the guess number\n";
			cin.clear();
			cin.ignore(100, '\n');
		} else if (guess > secret)
		{
			cout << "Your input is higher than the guess number\n";
			cin.clear();
			cin.ignore(100, '\n');
		} else
		{
			cout << "Your input is " << guess << " and guess is " << secret << endl;
			break;
		}
	} while (guess != -1);
		cout << "Exited!\n";
	return 0;
}