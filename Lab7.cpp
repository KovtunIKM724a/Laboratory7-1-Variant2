#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Please enter first number: ";
	cin >> a;
	a = abs(a);
	cout << "Please enter second number: ";
	cin >> b;
	b = abs(b);
	for (int c; b != 0; b = c) {
		c = a % b;
		a = b;
	}
	cout << "Result: " << a;
}
