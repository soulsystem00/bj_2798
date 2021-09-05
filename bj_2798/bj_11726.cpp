//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	long long n;
//	cin >> n;
//	long long* arr = new long long[n];
//	if (n == 1)
//	{
//		cout << 1;
//		return 0;
//	}
//	else if (n == 2)
//	{
//		cout << 2;
//		return 0;
//	}
//	else
//	{
//		arr[0] = 1;
//		arr[1] = 2;
//	}
//
//	for (long long i = 2; i < n; i++)
//	{
//		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
//	}
//
//	cout << arr[n - 1];
//}