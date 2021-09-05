//#include <iostream>
//#include<math.h>
//#include <algorithm>
//using namespace std;
//
//int hello[501][501];
//void input(int _size, int** arr)
//{
//	for(int i = 1; i <= _size; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//}
//
//void print(int _size, int** arr)
//{
//	for (int i = 1; i <= _size; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << arr[i][j] << " "; 
//		}
//		cout << endl;
//	}
//	
//}
//
//void makearr(int num, int _size, int** arr)
//{
//	hello[1][1] = arr[1][1];
//	for (int i = 2; i <= num; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			hello[i][j] = max(hello[i - 1][j] + arr[i][j], hello[i - 1][j - 1] + arr[i][j]);
//		}
//	}
//}
//
//int main()
//{
//	int num;
//	cin >> num;
//	int _size = 0;
//	for (int i = 1; i <= num; i++)
//	{
//		_size += i;
//	}
//	int** arr = new int*[num+1];
//	for (int i = 0; i <= num; i++)
//	{
//		arr[i] = new int[num+1];
//	}
//	input(num, arr);
//	makearr(num, _size, arr);
//
//	int tmp = 0;
//	for (int i = 1; i <= num; i++)
//	{
//		tmp = max(tmp, hello[num][i]);
//	}
//
//	cout << tmp;
//}