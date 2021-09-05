//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<int> v;
//	for (int i = 0; i < n; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		v.push_back(tmp);
//	}
//
//
//	int top(0);
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (top < v[i])
//		{
//			top = v[i];
//		}
//	}
//
//	
//	for (int i = top; i >= 0; i--)
//	{
//		vector<int> tmp = v;
//		int sum(0);
//		for (int j = 0; j < tmp.size(); j++)
//		{
//			tmp[j] = tmp[j] - i;
//			if (tmp[j] > 0)
//				sum = sum + tmp[j];
//		}
//
//		if (sum == m)
//		{
//			cout << i;
//			return 0;
//		}
//	}
//}