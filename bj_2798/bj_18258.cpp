//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <queue>
//#include <stdio.h>
//using namespace std;
//
//int main()
//{
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//	int cnt;
//	cin >> cnt;
//	cin.ignore();
//	queue<int> q;
//	for (int i = 0; i < cnt; i++)
//	{
//		string str;
//		
//		getline(cin, str);
//		if (str == "pop")
//		{
//			if (q.empty())
//			{
//				//printf("%d\n", -1);
//				cout << "-1\n";
//			}
//			else
//			{
//				//printf("%d\n", q.front());
//				cout << q.front() << "\n";
//				q.pop();
//			}
//			
//		}
//		else if (str == "size")
//		{
//			//printf("%d\n", q.size());
//			cout << q.size() << "\n";
//		}
//		else if (str == "empty")
//		{
//			if (q.empty())
//			{
//				//printf("%d\n", 1);
//				cout << 1 << "\n";
//			}
//			else
//			{
//				//printf("%d\n", 0);
//				cout << 0 << "\n";
//			}
//		}
//		else if (str == "front")
//		{
//			if (q.empty())
//			{
//				//printf("%d\n", -1);
//				cout << -1 << "\n";
//			}
//			else
//			{
//				//printf("%d\n", q.front());
//				cout << q.front() << "\n";
//			}
//		}
//		else if (str == "back")
//		{
//			if (q.empty())
//			{
//				//printf("%d\n", -1);
//				cout << -1 << "\n";
//			}
//			else
//			{
//				//printf("%d\n", q.back());
//				cout << q.back() << "\n";
//			}
//		}
//		else
//		{
//			int num = stoi(str.substr(5, str.length()));
//			q.push(num);
//		}
//		
//	}
//}