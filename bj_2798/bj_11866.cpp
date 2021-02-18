#include <iostream>
#include <queue>

using namespace std;

struct number
{
	int num;
	bool tf;
};


int main()
{
	int num;
	int del_num;
	cin >> num >> del_num;

	number* arr = new number[num];

	for (int i = 0; i < num; i++)
	{
		arr[i].num = i+1;
		arr[i].tf = true;
	}

	int cur = 0;
	int curcnt = 0;
	int cnt = 0;
	cout << "<";
	while (cnt<num)
	{
		if (arr[cur].tf)
		{
			curcnt++;
		}
		if (curcnt == del_num)
		{
			arr[cur].tf = false;
			if (cnt == num - 1)
			{
				cout << arr[cur].num;
			}
			else
			{
				cout << arr[cur].num << ", ";
			}
			cnt++;
			curcnt = 0;
		}
		cur++;
		if (cur >= num)
		{
			cur %= num;
		}
	}
	cout << ">";

}