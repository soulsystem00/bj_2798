//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[51][51];
//int result[51];
//#define INF 987654321
//int main()
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j)
//				continue;
//			arr[i + 1][j + 1] = INF;
//		}
//	}
//
//	int x(0);
//	int y(0);
//	while (x != -1 && y != -1)
//	{
//		cin >> x >> y;
//		arr[x][y] = 1;
//		arr[y][x] = 1;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			for (int k = 1; k <= n; k++)
//			{
//				if (arr[j][k] > arr[j][i] + arr[i][k])
//					arr[j][k] = arr[j][i] + arr[i][k];
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j)
//				continue;
//			if (arr[i + 1][j + 1] == INF)
//				arr[i + 1][j + 1] = 0;
//
//			result[i + 1] = max(result[i + 1], arr[i + 1][j + 1]);
//		}
//	}
//
//	int vote(987654321);
//	int cnt(0);
//	for (int i = 1; i <= n; i++)
//	{
//		vote = min(vote, result[i]);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (result[i] == vote)
//		{
//			cnt++;
//		}
//			
//	}
//	cout << vote << " " << cnt << '\n';
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (result[i] == vote)
//		{
//			cout << i << " ";
//		}
//
//	}
//
//	return 0;
//}