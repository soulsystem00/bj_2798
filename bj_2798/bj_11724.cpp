//#include <iostream>
//
//using namespace std;
//int visit[1001];
//int arr[1001][1001];
//void dfs(int arr[1001][1001], int start, int n)
//{
//	visit[start] = true;
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (!visit[i] && arr[start][i] == 1)
//		{
//			dfs(arr, i, n);
//		}
//	}
//}
//
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		arr[x][y] = 1;
//		arr[y][x] = 1;
//	}
//
//	int cnt(0);
//	for (int i = 1; i <= n; i++)
//	{
//		if (!visit[i])
//		{
//			cnt++;
//			dfs(arr, i, n);
//		}
//	}
//	cout << cnt;
//}