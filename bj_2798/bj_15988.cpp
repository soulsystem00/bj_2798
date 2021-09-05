//#include <iostream>
//
//using namespace std;
//
//long long dp[1000001];
//
//int main()
//{
//	int T;
//	cin >> T;
//	dp[1] = 1;
//	dp[2] = 2;
//	dp[3] = 4;
//	dp[4] = 7;
//	dp[5] = 13;
//
//	for (int u = 0; u < T; u++)
//	{
//		int n;
//		cin >> n;
//
//		if (n <= 5)
//		{
//			cout << dp[n] << endl;
//		}
//		else
//		{
//			for (int i = 6; i <= n; i++)
//			{
//				dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % 1000000009;
//			}
//			cout << dp[n] << endl;
//		}
//	}
//}