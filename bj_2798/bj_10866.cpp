//#include <iostream>
//#include <string>
//#include <deque>
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	cin.ignore();
//
//	deque<int> q;
//	for (int i = 0; i < n; i++)
//	{
//		string str;
//		getline(cin, str);
//
//		if (str.substr(0, 10) == "push_front")
//		{
//			int num = stoi(str.substr(11, str.length()));
//			q.push_front(num);
//		}
//		if (str.substr(0, 9) == "push_back")
//		{
//			int num = stoi(str.substr(10, str.length()));
//			q.push_back(num);
//		}
//		if (str.substr(0, 9) == "pop_front")
//		{
//			if (q.empty())
//			{
//				cout << -1 << '\n';
//			}
//			else
//			{
//				cout << q.front() << '\n';
//				q.pop_front();
//			}
//		}
//		if (str.substr(0, 8) == "pop_back")
//		{
//			if (q.empty())
//			{
//				cout << -1 << '\n';
//			}
//			else
//			{
//				cout << q.back() << '\n';
//				q.pop_back();
//			}
//		}
//		if (str.substr(0, 4) == "size")
//		{
//			cout << q.size() << "\n";
//		}
//		if (str.substr(0, 5) == "empty")
//		{
//			cout << q.empty() << '\n';
//		}
//		if (str.substr(0, 5) == "front")
//		{
//			if (q.empty())
//			{
//				cout << -1 << '\n';
//			}
//			else
//			{
//				cout << q.front() << '\n';
//			}
//		}
//		if (str.substr(0, 4) == "back")
//		{
//			if (q.empty())
//			{
//				cout << -1 << '\n';
//			}
//			else
//			{
//				cout << q.back() << '\n';
//			}
//		}
//	}
//}