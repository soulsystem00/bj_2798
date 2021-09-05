//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int arr[501][501];
//int DP[501][501];
//int visit[501][501];
//
//int dy[4] = { -1, 0, 1, 0 };
//int dx[4] = { 0, 1, 0, -1 };
//int DFS(int x, int y, int n)
//{
//	if (DP[x][y] == 0)
//	{
//		DP[x][y] = 1;
//		int tmp = 0;
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			if (nx >= 0 && nx < n && ny >= 0 && ny < n && arr[nx][ny] > arr[x][y])
//			{
//				tmp = max(tmp, DFS(nx, ny, n));
//			}
//		}
//		DP[x][y] += tmp;
//	}
//
//	return DP[x][y];
//}
//
//int main()
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int answer(0);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			answer = max(answer, DFS(i, j, n));
//		}
//	}
//	cout << answer;
//}
//
