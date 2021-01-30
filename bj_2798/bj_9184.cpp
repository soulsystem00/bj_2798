//#include <iostream>
//
//using namespace std;
//long long arr[21][21][21];
//int w(int a, int b, int c)
//{
//	if (a <= 0 || b <= 0 || c <= 0)
//	{
//		return 1;
//	}
//	else if (a > 20 || b > 20 || c > 20)
//	{
//		return w(20, 20, 20);
//	}
//	else if (a < b && b < c)
//	{
//		if (arr[a][b][c])
//			return arr[a][b][c];
//		else
//			return w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
//	}
//	else
//	{
//		if (arr[a][b][c])
//			return arr[a][b][c];
//		else
//			return w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
//	}
//	
//}
//
//int main()
//{
//	for (int i = 0; i < 21; i++)
//	{
//		for (int j = 0; j < 21; j++)
//		{
//			for (int k = 0; k < 21; k++)
//			{
//				arr[i][j][k] = w(i, j, k);
//			}
//		}
//	}
//	//for (int i = 0; i < 21; i++)
//	//{
//	//	for (int j = 0; j < 21; j++)
//	//	{
//	//		for (int k = 0; k < 21; k++)
//	//		{
//	//			cout << arr[i][j][k] << " ";
//	//		}
//	//		cout << endl;
//	//	}
//	//}
//	while (1)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (a == -1 && b == -1 && c == -1)
//		{
//			return 0;
//		}
//		else if (a < 0 || b < 0 || c < 0)
//		{
//			printf("w(%d, %d, %d) = 1\n", a, b, c);
//		}/*
//		else if (a > 20 || b > 20 || c > 20)
//		{
//			printf("w(%d, %d, %d) = %d\n", a, b, c, arr[20][20][20]);
//		}*/
//		else
//		{
//			printf("w(%d, %d, %d) = %d\n", a, b, c, w(a,b,c));
//		}
//	}
//}