////#include <iostream>
////
////using namespace std;
////int arr[1001][1001];
////int getresult(int N, int M)
////{
////	if (M == 0)
////	{
////		return 1;
////	}
////	else if (N == M)
////	{
////		return 1;
////	}
////	else
////	{
////		if (arr[M][M-N]) 
////			return arr[M][M-N];
////		else
////		{
////			return getresult(N - 1, M - 1) + getresult(N - 1, M);
////		}
////		
////	}
////}
////
////
////int main()
////{
////	arr[0][0] = 1;
////	//for (int i = 29; i > 0; i--)
////	//{
////	//	for (int j = 0; j <= i; j++)
////	//	{
////	//		int tmp = getresult(i, j);
////	//		arr[i][j] = tmp;
////	//	}
////	//}
////
////	for (int i = 1; i <= 1000; i++)
////	{
////		for (int j = 0; j <= i; j++)
////		{
////			if (j == 0)
////			{
////				arr[i][j] = 1;
////			}
////			else if (i == j)
////			{
////				arr[i][j] = 1;
////			}
////			else
////			{
////				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j]) % 10007;
////			}
////			
////		}
////	}
////	int N, M;
////	cin >> N >> M;
////	printf("%d\n", arr[N][M]);
////}
//
//#include <iostream>
//
//using namespace std;
//int arr[30][30];
//int getresult(int N, int M)
//{
//	if (M == 0)
//	{
//		return 1;
//	}
//	else if (N == M)
//	{
//		return 1;
//	}
//	else
//	{
//		if (arr[M][M - N])
//			return arr[M][M - N];
//		else
//		{
//			return getresult(N - 1, M - 1) + getresult(N - 1, M);
//		}
//
//	}
//}
//
//
//int main()
//{
//	arr[0][0] = 1;
//	//for (int i = 29; i > 0; i--)
//	//{
//	//	for (int j = 0; j <= i; j++)
//	//	{
//	//		int tmp = getresult(i, j);
//	//		arr[i][j] = tmp;
//	//	}
//	//}
//
//	for (int i = 1; i <= 29; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//
//		}
//	}
//	int num;
//	cin >> num;
//	for (int i = 0; i < num; i++)
//	{
//		int N, M;
//		cin >> N >> M;
//		printf("%d\n", arr[M][N]);
//	}
//}