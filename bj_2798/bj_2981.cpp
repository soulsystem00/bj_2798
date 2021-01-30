////#include <iostream>
////#include <math.h>
////using namespace std;
////
////int main()
////{
////	int _size;
////	cin >> _size;
////	int* arr = new int[_size];
////	for (int i = 0; i < _size; i++)
////	{
////		cin >> arr[i];
////	}
////	int max = -1;
////	int min = 2147483647;
////	for (int i = 0; i < _size; i++)
////	{
////		if (arr[i] < min)
////		{
////			min = arr[i];
////		}
////		if (arr[i] > max)
////		{
////			max = arr[i];
////		}
////	}
////	for (int i = 2; i < max+1; i++)
////	{
////		double tmp = arr[0] % i;
////		int j = 0;
////		for (j = 0; j < _size; j++)
////		{
////			if (arr[j] % i == tmp)
////			{
////				continue;
////			}
////			else
////			{
////				break;
////			}
////		}
////		if (j == _size)
////		{
////			cout << i << " ";
////		}
////	}
////}
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int gcb(int a, int b)
//{
//	if (b > a)
//	{
//		swap(a, b);
//	}
//	int c = a % b;
//	if (c == 0)
//		return b;
//	else
//		return gcb(b, c);
//}
//
//int main()
//{
//	int _size;
//	scanf("%d", &_size);
//	int* arr = new int[_size];
//	for (int i = 0; i < _size; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int _size2 = _size * (_size - 1) / 2;
//	int* arr2 = new int[_size2];
//	int k = 0;
//	for (int i = 0; i < _size - 1; i++)
//	{
//		for (int j = i + 1; j < _size; j++)
//		{
//			arr2[k] = abs(arr[i] - arr[j]);
//			k++;
//		}
//	}
//
//	for (int i = 0; i < _size; i++)
//	{
//		cout << arr2[i] << " ";
//	}
//	cout << endl;
//
//	int tmp;
//	if (_size2 > 1)
//	{
//		tmp = gcb(arr2[0], arr2[1]);
//		for (int i = 2; i < _size; i++)
//		{
//			tmp = gcb(tmp, arr2[i]);
//		}
//	}
//	else
//	{
//		tmp = arr2[0];
//	}
//
//
//	for (int i = 2; i <= tmp / 2; i++)
//	{
//		if (tmp % i == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("%d", tmp);
//}