//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int _size;
//	cin >> _size;
//
//	int* arr = new int[_size];
//
//	for (int i = 0; i < _size; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int max = -2147483646;
//	for (int i = 0; i < _size-1; i++)
//	{
//		int sum = arr[i] + arr[i + 1];
//		if (sum > max)
//		{
//			max = sum;
//		}
//	}
//
//	cout << max;
//}