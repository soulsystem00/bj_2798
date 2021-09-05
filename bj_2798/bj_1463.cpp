//#include <iostream>
//#include <algorithm>
//using namespace std;;
//
////long long min(int a, int b)
////{
////	return a < b ? a : b;
////}
//
//int main()
//{
//	long long num;
//	cin >> num;
//
//	long long* arr = new long long[num + 1];
//
//
//	if (num == 1)
//	{
//		cout << 0;
//		return 0;
//	}
//	if (num == 2)
//	{
//		cout << 1;
//		return 0;
//	}
//	if (num == 3)
//	{
//		cout << 1;
//		return 0;
//	}
//
//	arr[1] = 0;
//	arr[2] = 1;
//	arr[3] = 1;
//
//	for (long long i = 4; i <= num; i++)
//	{
//		arr[i] = arr[i - 1] + 1;
//		if (i % 3 == 0)
//		{
//			arr[i] = min(arr[i], arr[i / 3] + 1);
//		}
//
//		if (i % 2 == 0)
//		{
//			arr[i] = min(arr[i], arr[i / 2] + 1);
//		}
//	}
//
//	cout << arr[num];
//}