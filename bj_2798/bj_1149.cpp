//////#include <iostream>
//////#include <vector>
//////using namespace std;
//////
//////typedef struct House
//////{
//////	int red;
//////	int blue;
//////	int green;
//////}house;
//////
//////int function()
//////{
//////	return 0;
//////
//////
//////}
//////
//////int Find_min(house h,int* cur_color)
//////{
//////	int min = 9999;
//////	if (*cur_color == 0)
//////	{
//////		if (h.blue < h.green)
//////		{
//////			*cur_color = 1;
//////			return h.blue;
//////		}
//////		else
//////		{
//////			*cur_color = 2;
//////			return h.green;
//////		}
//////			
//////	}
//////	else if (*cur_color == 1)
//////	{
//////		if (h.red < h.green)
//////		{
//////			*cur_color = 0;
//////			return h.red;
//////		}
//////		else
//////		{
//////			*cur_color = 2;
//////			return h.green;
//////		}
//////			
//////	}
//////	else if(*cur_color == 2)
//////	{
//////		if (h.red < h.blue)
//////		{
//////			*cur_color = 0;
//////			return h.red;
//////		}
//////		else
//////		{
//////			*cur_color = 1;
//////			return h.blue;
//////		}
//////	}
//////	else
//////	{
//////		if (h.red <= h.blue && h.red <= h.green)
//////		{
//////			*cur_color = 0;
//////			return h.red;
//////		}
//////		else if (h.blue <= h.red && h.blue <= h.green)
//////		{
//////			*cur_color = 1;
//////			return h.blue;
//////		}
//////		else if (h.green <= h.red && h.green <= h.blue)
//////		{
//////			*cur_color = 2;
//////			return h.green;
//////		}
//////	}
//////}
//////
//////int returnnum(house h, int a)
//////{
//////	if (a == 0)
//////		return h.red;
//////	else if (a == 1)
//////		return h.blue;
//////	else if (a == 2)
//////	{
//////		return h.green;
//////	}
//////}
//////
//////int main()
//////{
//////	int num;
//////	cin >> num;
//////	vector<House> arr;
//////	int* arr2 = new int[3];
//////	int min = 99999999;
//////	int cur_color = -1;
//////	
//////
//////	for (int i = 0; i < num; i++)
//////	{
//////		house tmp;
//////		cin >> tmp.red >> tmp.blue >> tmp.green;
//////		//sum += Find_min(tmp, &cur_color);
//////		arr.push_back(tmp);
//////	}
//////	
//////	for (int i = 0; i < 3; i++)
//////	{
//////		cur_color = i;
//////		arr2[i] = returnnum(arr[0], i);
//////		for (int j = 1; j < arr.size(); j++)
//////		{
//////			arr2[i] += Find_min(arr[j], &cur_color);
//////		}
//////	}
//////
//////	for (int i = 0; i < 3; i++)
//////	{
//////		cout << arr2[i] << " ";
//////		if (arr2[i] <= min)
//////			min = arr2[i];
//////	}
//////
//////
//////	cout << min;
//////}
////
////#include <iostream>
////
////using namespace std;
////int Return_min(int a, int b)
////{
////	return a < b ? a : b;
////}
////
////int Return_min(int a, int b, int c)
////{
////	if (a <= b && a <= c)
////		return a;
////	else if (b <= a && b <= c)
////	{
////		return b;
////	}
////	else if (c <= a && c <= b)
////	{
////		return c;
////	}
////}
////
////int main()
////{
////	int num;
////	cin >> num;
////	int** arr = new int*[(num + 1)];
////
////	for (int i = 0; i < num + 1; i++)
////	{
////		arr[i] = new int[3];
////	}
////
////	arr[0][0] = 0;
////	arr[0][1] = 0;
////	arr[0][2] = 0;
////
////	for (int i = 1; i < num + 1; i++)
////	{
////		int a, b, c;
////		cin >> a >> b >> c;
////		arr[i][0] = Return_min(arr[i - 1][1], arr[i - 1][2]) + a;
////		arr[i][1] = Return_min(arr[i - 1][0], arr[i - 1][2]) + b;
////		arr[i][2] = Return_min(arr[i - 1][0], arr[i - 1][1]) + c;
////	}
////	cout << Return_min(arr[num][0], arr[num][1], arr[num][2]);
////}
//
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
//	int** arr = new int*[(num + 1)];
//
//	for (int i = 0; i < num + 1; i++)
//	{
//		arr[i] = new int[3];
//	}
//
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
//
//
//	for (int i = 1; i < num + 1; i++)
//	{
//		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
//	}
//
//	arr2[0][0] = 0;
//	arr2[0][1] = 0;
//	arr2[0][2] = 0;
//
//	for (int i = 0; i < num; i++)
//	{
//		arr2[i][0] = Return_min(arr[i + 1][1], arr[i + 1][2]) + arr2[i][0];
//		arr2[i][1] = Return_min(arr[i + 1][0], arr[i + 1][2]) + arr2[i][1];
//		arr2[i][2] = Return_min(arr[i + 1][0], arr[i + 1][1]) + arr2[i][2];
//	}
//
//	cout << Return_min(arr2[num-1][0], arr2[num-1][1], arr2[num-1][2]);
//}