//#include <iostream>
//#include <vector>
//#include <stack>
//#include <math.h>
//using namespace std;
//
//long long MY_pow(long long n, long long m)
//{
//	long long p(1);
//
//	for (int i = 0; i < m; i++)
//	{
//		p = (p * n) % 1234567891;
//	}
//
//	return p;
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	string str;
//	cin >> str;
//	vector<long long> v;
//	for (int i = 0; i < str.length(); i++)
//	{
//		v.push_back((str[i] - 'a') + 1);
//	}
//
//	long long sum(0);
//	for (int i = 0; i < n; i++)
//	{
//		sum = sum + (v[i] * MY_pow(31, i)) % 1234567891;
//	}
//
//	cout << sum % 1234567891 << endl;
//
//	return 0;
//}