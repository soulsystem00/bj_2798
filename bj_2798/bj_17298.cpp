//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	int num;
//	cin >> num;
//	int* arr = new int[num];
//	int* result = (int*)calloc(num, sizeof(int));
//	for (int i = 0; i < num; i++)
//	{
//		cin >> arr[i];
//	}
//	stack<int> s;
//
//	for (int i = 0; i < num - 1; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			result[i] = arr[i + 1];
//			while (!s.empty() && arr[s.top()] < arr[i + 1])
//			{
//				result[s.top()] = arr[i + 1];
//				s.pop();
//			}
//		}
//		else
//		{
//			s.push(i);
//		}
//	}
//	//result[num - 1] = -1;
//	for (int i = 0; i < num; i++)
//	{
//		if (result[i] == 0)
//			cout << -1 << " ";
//		else
//		{
//			cout << result[i] << " ";
//		}
//		
//	}
//}