//#include <iostream>
//
//using namespace std;
//
//int arr[30][30];
//#define SIZE 30
//#define INF 987654321
//int main()
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			if (i == j)
//				continue;
//			arr[i][j] = INF;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		string str_x, is, str_y;
//
//		cin >> str_x >> is >> str_y;
//		int x = str_x[0] - 'a';
//		int y = str_y[0] - 'a';
//		arr[x][y] = 1;
//	}
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			for (int k = 0; k < SIZE; k++)
//			{
//				if (arr[j][k] > arr[j][i] + arr[i][k])
//					arr[j][k] = arr[j][i] + arr[i][k];
//			}
//		}
//	}
//
//	int m;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		string str_x, is, str_y;
//
//		cin >> str_x >> is >> str_y;
//		int x = str_x[0] - 'a';
//		int y = str_y[0] - 'a';
//
//		if (arr[x][y] > 0 && arr[x][y] < INF)
//			cout << 'T' << '\n';
//		else
//			cout << 'F' << '\n';
//	}
//	return 0;
//
//}