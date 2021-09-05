//#include <iostream>
//
//using namespace std;
//
//int arr[101][101];
//#define INF 987654321
//int main()
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			int n;
//			cin >> n;
//			if (n == 0)
//				arr[i][j] = INF;
//			else
//				arr[i][j] = n;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < n; k++)
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
//			if (arr[i][j] < INF)
//			{
//				cout << 1 << " ";
//			}
//			else
//			{
//				cout << 0 << " ";
//			}
//		}
//		cout << '\n';
//	}
//
//}