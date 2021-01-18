#include <iostream>
#include <string>
using namespace std;

bool chkNum(int num)
{
	string Num = to_string(num);
	if (Num.length() == 1 || Num.length() == 2)
		return true;

	for (int i = 0; i < Num.length() - 2; i++)
	{
		if (Num[i + 1] - Num[i] != Num[i + 2] - Num[i + 1])
			return false;
	}
	return true;
}

int main()
{
	int num;
	cin >> num;
	int cnt(0);

	for (int i = 1; i < num + 1; i++)
	{
		if (chkNum(i))
			cnt++;
	}
	cout << cnt;
}