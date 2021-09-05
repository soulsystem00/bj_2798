//#include <iostream>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//int DFS_visit[1001];
//int BFS_visit[1001];
//
//int arr[1001][1001];
//
//void DFS(int cur, int n)
//{
//	DFS_visit[cur] = true;
//	cout << cur << " ";
//	for (int i = 1; i <= n; i++)
//	{
//		if (!DFS_visit[i] && arr[cur][i] == 1)
//		{
//			DFS(i, n);
//		}
//	}
//}
//
//void BFS(int v, int n)
//{
//	queue<int> q;
//
//	q.push(v);
//
//	while (true)
//	{
//		if (q.empty())
//			break;
//
//		int tmp = q.front();
//		q.pop();
//
//		if (BFS_visit[tmp] != 1)
//		{
//			cout << tmp << " ";
//		}
//		BFS_visit[tmp] = 1;
//		
//		for (int i = 1; i <= n; i++)
//		{
//			int cur = i % n;
//			cur = (cur == 0) ? n : cur;
//			if (BFS_visit[cur] != 1 && arr[tmp][cur] == 1)
//			{
//				q.push(cur);
//			}
//		}
//	}
//}
//
//
//
//int main()
//{
//	int n, m, v;
//	cin >> n >> m >> v;
//
//	for (int i = 0; i < m; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		arr[x][y] = 1;
//		arr[y][x] = 1;
//	}
//
//	DFS(v, n);
//	cout << endl;
//	BFS(v, n);
//}