//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//typedef struct Paper
//{
//	int priority;
//	int index;
//}paper;
//
//bool compare(int a, int b)
//{
//	return a > b;
//}
//
//int main()
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int T;
//	cin >> T;
//	for (int t = 0; t < T; t++)
//	{
//		int n, m;
//		cin >> n >> m;
//
//		vector<int> v;
//		queue<paper> q;
//		for (int i = 0; i < n; i++)
//		{
//			int p;
//			cin >> p;
//			paper P = { p, i };
//			v.push_back(p);
//			q.push(P);
//		}
//		sort(v.begin(), v.end(), compare);
//		int cnt(0);
//
//		while (true)
//		{
//			while (v.front() != q.front().priority)
//			{
//				auto tmp = q.front();
//				q.pop();
//				q.push(tmp);
//			}
//
//			v.erase(v.begin());
//			auto tmp = q.front();
//			q.pop();
//			cnt++;
//
//			if (tmp.index == m)
//			{
//				cout << cnt << '\n';
//				break;
//			}
//		}
//	}
//	return 0;
//}