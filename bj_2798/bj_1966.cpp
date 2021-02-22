//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//bool function(int a, int b)
//{
//	return b < a;
//}
//
//struct number
//{
//	int num;
//	int index;
//};
//int main()
//{
//	int num;
//	cin >> num;
//	for (int i = 0; i < num; i++)
//	{
//		int asize, select;
//		cin >> asize >> select;
//		queue<int> q;
//		int selectnum;
//		for (int i = 0; i < asize; i++)
//		{
//			int tmp;
//			cin >> tmp;
//			q.push(tmp);
//			if (i == select)
//			{
//				selectnum = tmp;
//			}
//		}
//		int cnt = 1;
//		int cntequal = 0;
//		int index = 0;
//		bool check = true;
//		queue<int> printer;
//		while (!q.empty())
//		{
//			int tmp = q.front();
//			q.pop();
//			if (tmp > selectnum)
//			{
//				printer.push(tmp);
//			}
//		}
//		cout << cnt << endl;
//	}
//}

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

bool function(int a, int b)
{
	return b < a;
}

struct number
{
	int num;
	int index;
};
int main()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int asize, select;
		cin >> asize >> select;
		queue<number> q;
		int selectnum;
		for (int i = 0; i < asize; i++)
		{
			number tmp2;
			int tmp;
			cin >> tmp;
			tmp2.num = tmp;
			tmp2.index = i;
			q.push(tmp2);
			if (i == select)
			{
				selectnum = tmp;
			}
		}
		int cnt = 0;
		int cntequal = 0;
		int index = 0;
		bool check = true;
		while (!q.empty())
		{
			
			number tmp = q.front();
			q.pop();
			if (tmp.num > selectnum)
			{
				cnt++;
			}			
			else
			{
				q.push(tmp);
			}
		}
		cout << cnt << endl;
	}
}