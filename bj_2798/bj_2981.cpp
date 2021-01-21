#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int _size;
	cin >> _size;
	int* arr = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		cin >> arr[i];
	}
	int max = -1;
	int min = 2147483647;
	for (int i = 0; i < _size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int i = 2; i < max+1; i++)
	{
		double tmp = arr[0] % i;
		int j = 0;
		for (j = 0; j < _size; j++)
		{
			if (arr[j] % i == tmp)
			{
				continue;
			}
			else
			{
				break;
			}
		}
		if (j == _size)
		{
			cout << i << " ";
		}
	}
}