//#include <iostream>
//
//using namespace std;
//
//int arr [101][101];
//#define INF 123456789
//int main()
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j)
//				continue;
//			arr[i][j] = INF;
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		int x, y, cost;
//		cin >> x >> y >> cost;
//		arr[x][y] = arr[x][y] > cost ? cost : arr[x][y];
//	}
//
//	for (int via = 1; via <= n; via++)
//	{
//		for (int from = 1; from <= n; from++)
//		{
//			for (int to = 1; to <= n; to++)
//			{
//				if (arr[from][to] > arr[from][via] + arr[via][to])
//					arr[from][to] = arr[from][via] + arr[via][to];
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (arr[i][j] == INF)
//				cout << 0 << " ";
//			else
//				cout << arr[i][j] << " ";
//		}
//		cout << '\n';
//	}
//}