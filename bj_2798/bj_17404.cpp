//#include <iostream>
//
//using namespace std;
//int Return_min(int a, int b)
//{
//	return a < b ? a : b;
//}
//
//int Return_min(int a, int b, int c)
//{
//	if (a <= b && a <= c)
//		return a;
//	else if (b <= a && b <= c)
//	{
//		return b;
//	}
//	else if (c <= a && c <= b)
//	{
//		return c;
//	}
//}
//
//int main()
//{
//	int num;
//	cin >> num;
//
//
//	int** arr = new int*[(num + 1)];
//
//	for (int i = 0; i < num + 1; i++)
//	{
//		arr[i] = new int[3];
//	}
//	int** arr2 = new int* [(num + 1)];
//
//	for (int i = 0; i < num + 1; i++)
//	{
//		arr2[i] = new int[3];
//	}
//
//	arr[0][0] = 0;
//	arr[0][1] = 0;
//	arr[0][2] = 0;
//
//	arr2[0][0] = 0;
//	arr2[0][1] = 0;
//	arr2[0][2] = 0;
//
//	for (int i = 1; i < num + 1; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		arr[i][0] = a;
//		arr[i][1] = b;
//		arr[i][2] = c;
//	}
//
//	int min = 987654321;
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (i == j)
//			{
//				arr2[1][j] = arr[1][j];
//			}
//			else
//			{
//				arr2[1][j] = 987654321;
//			}
//		}
//		for (int j = 2; j < num + 1; j++)
//		{
//			arr2[j][0] = Return_min(arr2[j - 1][1], arr2[j - 1][2]) + arr[j][0];
//			arr2[j][1] = Return_min(arr2[j - 1][0], arr2[j - 1][2]) + arr[j][1];
//			arr2[j][2] = Return_min(arr2[j - 1][1], arr2[j - 1][0]) + arr[j][2];
//		}
//
//		for (int j = 0; j < 3; j++)
//		{
//			if (j == i) continue;
//			min = Return_min(min, arr2[num][j]);
//		}
//	}
//	cout << min;
//}