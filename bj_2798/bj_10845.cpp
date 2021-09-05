//#include <iostream>
//#include <string>
//#include <queue>
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
//	queue<int> q;
//	for (int i = 0; i < n; i++)
//	{
//		string str;
//		getline(cin, str);
//
//		if (str.substr(0, 4) == "push")
//		{
//			int num = stoi(str.substr(5, str.length()));
//			q.push(num);
//		}
//		if (str.substr(0, 3) == "pop")
//		{
//			if (q.empty())
//			{
//				cout << -1 << '\n';
//			}
//			else
//			{
//				cout << q.front() << '\n';
//				q.pop();
//			}
//
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