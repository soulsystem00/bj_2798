#include <iostream>

using namespace std;

int w(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		return 1;
	}
	else if (a > 20 || b > 20 || c > 20)
	{
		return w(20, 20, 20);
	}
	else if (a < b && b < c)
	{
		return w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	}
	else
	{
		return w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	}
	
}


int main()
{
	cout << w(8, 0, 8) << endl;
	cout << w(8, 1, 7) << endl;
	cout << w(8, 2, 6) << endl;
	cout << w(8, 3, 5) << endl;
	cout << w(8, 4, 4) << endl;
	cout << w(8, 5, 3) << endl;
	cout << w(8, 6, 2) << endl;
	cout << w(8, 7, 1) << endl;
	cout << w(8, 8, 0) << endl;
	cout << w(8, 8, 8) << endl;

	cout << w(7, 0, 7) << endl;
	cout << w(7, 1, 6) << endl;
	cout << w(7, 2, 5) << endl;
	cout << w(7, 3, 4) << endl;
	cout << w(7, 4, 3) << endl;
	cout << w(7, 5, 2) << endl;
	cout << w(7, 6, 1) << endl;
	cout << w(7, 7, 0) << endl;
	cout << w(7, 7, 7) << endl;


	cout << w(6, 0, 6) << endl;
	cout << w(6, 1, 5) << endl;
	cout << w(6, 2, 4) << endl;
	cout << w(6, 3, 3) << endl;
	cout << w(6, 4, 2) << endl;
	cout << w(6, 5, 1) << endl;
	cout << w(6, 6, 0) << endl;
	cout << w(6, 3, 6) << endl;

	cout << w(5, 5, 5) << endl;
	cout << w(5, 0, 5) << endl;
	cout << w(5, 1, 4) << endl;
	cout << w(5, 2, 3) << endl;
	cout << w(5, 3, 2) << endl;
	cout << w(5, 4, 1) << endl;
	cout << w(5, 5, 0) << endl;
	

	cout << w(4, 4, 4) << endl;
	cout << w(4, 2, 2) << endl;
	cout << w(4, 1, 3) << endl;
	cout << w(4, 3, 1) << endl;
}