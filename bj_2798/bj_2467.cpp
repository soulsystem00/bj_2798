//#include <iostream>
//
//using namespace std;
//
//class Answer
//{
//public:
//	int a, b;
//	long long sum;
//	Answer() { a = 0; b = 0; sum = 2147483647; }
//};
//
//int main()
//{
//	long long n;
//	cin >> n;
//	long long* arr = new long long[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	
//	Answer a;
//	
//	long long start, end;
//	start = 0;
//	end = n - 1;
//	while (true)
//	{
//		long long tmp = abs(arr[start] + arr[end]);
//		if (tmp <= a.sum)
//		{
//			a.a = arr[start];
//			a.b = arr[end];
//			a.sum = tmp;
//		}
//		if (abs(arr[start]) < abs(arr[end]))
//		{
//			end--;
//			
//		}
//		else
//			start++;
//		if (start == end)
//			break;
//
//	}
//	cout << a.a << " " << a.b;
//}