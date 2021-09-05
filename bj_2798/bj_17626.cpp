//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int min_return(int a, int b)
//{
//	return a < b ? a : b;
//}
//
//int min_return(int a, int b, int c)
//{
//	if (a <= b && a <= c)
//		return a;
//	else if (b <= a && b <= c)
//		return b;
//	else if (c <= b && c <= a)
//		return c;
//}
//int main()
//{
//	int n;
//	cin >> n;
//
//	int* arr = new int[(n + 1)];
//
//	arr[0] = 999999999;
//
//	for (int i = 0; i < n + 1; i++)
//	{
//		arr[i] = 100;
//	}
//	//arr[1] = 1;
//	//arr[2] = 2;
//	//arr[3] = 3;
//	//arr[4] = 1;
//	//arr[5] = 2;
//	//arr[6] = 3;
//	//arr[7] = 4;
//	//arr[8] = 2;
//	//arr[9] = 1;
//	//arr[10] = 2;
//	//arr[11] = 3;
//	//arr[12] = 3;
//
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp = (int)sqrt(i);
//		int tmp2 = (int)cbrt(i);
//		if ((tmp * tmp) == i)
//		{
//			arr[i] = 1;
//		}
//		else if (i % 3 == 0)
//		{
//			arr[i] = min_return(arr[i / 3] * 3, (arr[(tmp * tmp)] + arr[i - (tmp * tmp)]));
//		}
//		else
//		{
//			arr[i] = (arr[(tmp * tmp)] + arr[i - (tmp * tmp)]);
//		}
//		if (arr[i] > 4)
//		{
//			cout << i << "\t" << arr[i] << endl;
//			return 0;
//		}
//			
//	}
//	cout << arr[n];
//}