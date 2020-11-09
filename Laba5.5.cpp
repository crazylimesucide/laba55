#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int A(int m, int n)
{
	if (m == 0)
		return n + 1;
	else if (n == 0)
		return A(m - 1, 1);
	else
		return A(m - 1, A(m, n - 1));
}

int main()
{
	double a, b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	int V = A(a, b);

	cout << "V = " << V << endl;
	return 0;
}