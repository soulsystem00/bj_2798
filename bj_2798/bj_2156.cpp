//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int dp[10001];
//
//int main()
//{
//	int n;
//	cin >> n;
//	int* arr = new int[n + 1];
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	dp[1] = arr[1];
//	dp[2] = max(arr[1] + arr[2], arr[2]);
//	dp[3] = max(arr[1], arr[2]) + arr[3];
//
//	for (int i = 4; i <= n; i++)
//	{
//		dp[i] = arr[i] + max(dp[i - 3] + arr[i - 1], dp[i - 2] + arr[i]);
//	}
//
//	int answer(0);
//	for (int i = 1; i <= n; i++)
//	{
//		if (answer < dp[i])
//		{
//			answer = dp[i];
//		}
//	}
//	cout << answer;
//}