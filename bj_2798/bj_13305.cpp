#include <iostream>
using namespace std;;

int main()
{
	long long cnt;
	cin >> cnt;
	long long* node = new long long[cnt];
	long long cnt2 = cnt - 1;
	long long* line = new long long[cnt2];
	for (int i = 0; i < cnt - 1; i++)
	{
		cin >> line[i];
	}
	for (int i = 0; i < cnt; i++)
	{
		cin >> node[i];
	}

	long long min = 2147483647;
	long long sum = 0;

	for (int i = 0; i < cnt - 1; i++)
	{
		if (min > node[i])
		{
			min = node[i];
		}
		sum = sum + (min * line[i]);
	}

	cout << sum;
}