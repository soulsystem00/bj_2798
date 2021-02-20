//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	int cnt;
//	int num;
//	cin >> cnt >> num;
//
//	queue<int> q;
//	for (int i = 0; i < cnt; i++)
//	{
//		q.push(i + 1);
//	}
//
//
//	int curcnt = 1;
//	cout << "<";
//	while (!q.empty())
//	{
//
//		if (curcnt != num)
//		{
//			int tmp = q.front();
//			q.pop();
//			q.push(tmp);
//			curcnt++;
//		}
//		else
//		{
//			if (q.size() == 1)
//			{
//				cout << q.front();
//			}
//			else
//			{
//				cout << q.front() << ", ";
//			}
//			
//			q.pop();
//			curcnt = 1;
//		}
//	}
//	cout << ">";
//}