// GCD (A, B)
// USING EUCLID'S ALGORITHM

#include <iostream>
using namespace std;

int gcd (int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return (a);
}

int main()
{
	int x, y;
	cout << "Enter two integers: ";
	if (!(cin >> x >> y))
	{
		cout << "Integers only\n";
	} else
	{
		cout << "gcd (" << x << ", " << y << ") = " << gcd(x,y) << endl;
	}
	return (0);
}