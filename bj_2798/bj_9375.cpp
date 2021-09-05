//#include <iostream>
//#include <map>
//using namespace std;
//
//float fac(int n)
//{
//	int asdf(1);
//	for (int i = 1; i <= n; i++)
//	{
//		asdf *= i;
//	}
//	return asdf;
//}
//
//int combination(int n, int r)
//{
//	if (n == r || r == 0)
//		return 1;
//	else
//		return combination(n - 1, r - 1) + combination(n - 1, r);
//}
//int main()
//{
//	int T;
//	cin >> T;
//	for (int t = 0; t < T; t++)
//	{
//		int n;
//		map<string, int> m;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			string a, b;
//			cin >> a >> b;
//			m[b]++;
//		}
//		int ans(1);
//		for (auto i : m)
//		{
//			ans *= (i.second + 1);
//		}
//		cout << --ans << endl;
//	}
//}