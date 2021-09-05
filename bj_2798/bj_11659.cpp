//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	int total(0);
//
//	int* arr = new int[n + 1];
//	vector<int> left;
//	vector<int> right;
//	left.push_back(0);
//	right.push_back(0);
//
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//		total += arr[i];
//		left.push_back(total);
//	}
//	total = 0;
//	for (int i = n; i >= 1; i--)
//	{
//		total += arr[i];
//		right.push_back(total);
//	}
//
//
//
//	for (int i = 0; i < m; i++)
//	{
//		int start, end;
//		scanf("%d %d", &start, &end);
//		int sum(0);
//
//		sum = total - left[start - 1] - right[n - end];
//		printf("%d\n", sum);
//	}
//}