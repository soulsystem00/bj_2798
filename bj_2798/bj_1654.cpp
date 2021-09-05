//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int getCnt(long long* arr, long long k, long long mid)
//{
//	int sum(0);
//	for (int i = 0; i < k; i++)
//	{
//		sum += arr[i] / mid;
//	}
//
//	return sum;
//}
//
//int main()
//{
//	long long k, n;
//	cin >> k >> n;
//	long long* arr = new long long[k];
//	for (int i = 0; i < k; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, arr + k);
//
//	long long left = 1;
//	long long right = arr[k - 1];
//
//	long long cnt(0);
//	long long mid(0);
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		cnt = getCnt(arr, k, mid);
//
//		if (cnt >= n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//
//	cout << right;
//}