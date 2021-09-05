//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Answer
//{
//public:
//	long long a, b, c;
//	long long sum;
//	Answer() { a = 0; b = 0; c = 0; sum = 4000000000; }
//};
//
//int main()
//{
//	Answer a;
//	long long n;
//	cin >> n;
//	vector<long long> arr;
//	for (int i = 0; i < n; i++)
//	{
//		long long tmp;
//		cin >> tmp;
//		arr.push_back(tmp);
//	}
//	sort(arr.begin(), arr.end());
//	
//
//	for (int i = 0; i < n - 2; i++)
//	{
//		long long start, end;
//		start = i + 1;
//		end = n - 1;
//		while (true)
//		{
//			long long tmp = arr[i] + arr[start] + arr[end];
//			if (abs(tmp) <= abs(a.sum))
//			{
//				a.a = arr[i];
//				a.b = arr[start];
//				a.c = arr[end];
//				a.sum = tmp;
//			}
//			if (tmp > 0)
//				end--;
//			else
//				start++;
//
//			if (start >= end)
//				break;
//		}
//	}
//	
//	cout << a.a << " " << a.b << " " << a.c;
//}
//
//
////#include <iostream>
////#include <algorithm>
////using namespace std;
////
////class Answer
////{
////public:
////	int a, b;
////	long long sum;
////	Answer() { a = 0; b = 0; sum = 2147483647; }
////};
////
////int main()
////{
////	long long n;
////	cin >> n;
////	long long* arr = new long long[n];
////	for (int i = 0; i < n; i++)
////	{
////		cin >> arr[i];
////	}
////	sort(arr, arr + n);
////	Answer a;
////
////	long long start, end;
////	start = 0;
////	end = n - 1;
////	while (true)
////	{
////		long long tmp = abs(arr[start] + arr[end]);
////		if (tmp <= a.sum)
////		{
////			a.a = arr[start];
////			a.b = arr[end];
////			a.sum = tmp;
////		}
////		if (abs(arr[start]) < abs(arr[end]))
////		{
////			end--;
////
////		}
////		else
////			start++;
////		if (start == end)
////			break;
////
////	}
////	cout << a.a << " " << a.b;
////}
//
////#include <iostream>
////#include <algorithm>
////using namespace std;
////
////int main()
////{
////	long long n;
////	long long a, b, c;
////	cin >> n;
////	long long* arr = new long long[n];
////	for (int i = 0; i < n; i++)
////	{
////		cin >> arr[i];
////	}
////	sort(arr, arr + n);
////	long long sum(2147483647);
////
////	for (long long i = 0; i < n - 2; i++)
////	{
////		for (long long j = i + 1; j < n - 1; j++)
////		{
////			for (long long k = j + 1; k < n; k++)
////			{
////				if (abs(arr[i] + arr[j] + arr[k]) < sum)
////				{
////					sum = abs(arr[i] + arr[j] + arr[k]);
////					a = i;
////					b = j;
////					c = k;
////				}
////			}
////		}
////	}
////
////	cout << arr[a] << " " << arr[b] << " " << arr[c];
////}