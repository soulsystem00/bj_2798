//#include <iostream>
//#include <deque>
//#include <vector>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int n, m;
//	int cnt(0);
//	deque<int> dq;
//	vector<int> v;
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		dq.push_back(i + 1);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		v.push_back(tmp);
//	}
//
//	while (!v.empty())
//	{
//		if (dq.front() == v.front())
//		{
//			dq.pop_front();
//			v.erase(v.begin());
//			continue;
//		}
//
//		int index;
//		for (int i = 0; i < dq.size(); i++)
//		{
//			if (v.front() == dq[i])
//			{
//				index = i;
//				break;
//			}
//				
//		}
//
//		if (abs(0 - index) < abs((int)dq.size() - index))
//		{
//			while (dq.front() != v.front())
//			{
//				auto tmp = dq.front();
//				dq.pop_front();
//				dq.push_back(tmp);
//				cnt++;
//			}
//		}
//		else /*if (abs(dq.front() - v.front()) >= abs(dq.back() - v.front()))*/
//		{
//			while (dq.front() != v.front())
//			{
//				auto tmp = dq.back();
//				dq.pop_back();
//				dq.push_front(tmp);
//				cnt++;
//			}
//		}
//
//	}
//
//	cout << cnt;
//
//	return 0;
//}