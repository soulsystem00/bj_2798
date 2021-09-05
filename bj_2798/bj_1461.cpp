//#include <iostream>
//#include <math.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool compare_desc(int a, int b)
//{
//	return a > b;
//}
//
//bool compare_asc(int a, int b)
//{
//	return a < b;
//}
//
//int main()
//{
//	int size;
//	int book;
//	cin >> size >> book;
//
//
//	int* arr = new int[size];
//	vector<int> arr_pos;
//	vector<int> arr_neg;
//	for (int i = 0; i < size; i++)
//	{
//		cin >> arr[i];
//		if (arr[i] < 0)
//		{
//			arr_neg.push_back(arr[i]);
//		}
//		else
//		{
//			arr_pos.push_back(arr[i]);
//		}
//	}
//
//	sort(arr_neg.begin(), arr_neg.end(),compare_desc);
//	sort(arr_pos.begin(), arr_pos.end(),compare_asc);
//
//	//for (int i = 0; i < size; i++)
//	//{
//	//	cin >> arr[i];
//	//}
//
//
//	//for (int i = 0; i < size-1; i++)
//	//{
//	//	for (int j = i+1; j < size; j++)
//	//	{
//	//		if (arr[i] < arr[j])
//	//		{
//	//			auto tmp = arr[i];
//	//			arr[i] = arr[j];
//	//			arr[j] = tmp;
//	//		}
//	//	}
//	//}
//	//for (int i = 0; i < size; i++)
//	//{
//	//	cout << arr[i] << " ";
//	//}
//	//cout << endl;
//
//	//for (int i = 0; i < arr_neg.size(); i++)
//	//{
//	//	cout << arr_neg[i] << " ";
//	//}
//
//	//cout << endl;
//
//	//for (int i = 0; i < arr_pos.size(); i++)
//	//{
//	//	cout << arr_pos[i] << " ";
//	//}
//
//
//
//	int cnt(0);
//	int first_size_of_arr_neg = arr_neg.size();
//	int first_size_of_arr_pos = arr_pos.size();
//
//	if (arr_neg.size() == 0)
//	{
//		while (arr_pos.size() > 0)
//		{
//			if (arr_pos.size() == first_size_of_arr_pos)
//			{
//				cnt += abs(arr_pos.back());
//			}
//			else
//			{
//				cnt += (abs(arr_pos.back()) * 2);
//			}
//			for (int i = 0; i < book; i++)
//			{
//				if (arr_pos.size() > 0)
//				{
//					arr_pos.pop_back();
//				}
//			}
//		}
//	}
//	else if (arr_pos.size() == 0)
//	{
//		while (arr_neg.size() > 0)
//		{
//			if (arr_neg.size() == first_size_of_arr_neg)
//			{
//				cnt += abs(arr_neg.back());
//			}
//			else
//			{
//				cnt += (abs(arr_neg.back()) * 2);
//			}
//			for (int i = 0; i < book; i++)
//			{
//				if (arr_neg.size() > 0)
//				{
//					arr_neg.pop_back();
//				}
//			}
//		}
//	}
//	else if (abs(arr_neg.back()) > abs(arr_pos.back()))
//	{
//		while (arr_neg.size() > 0)
//		{
//			if (arr_neg.size() == first_size_of_arr_neg)
//			{
//				cnt += abs(arr_neg.back());
//			}
//			else
//			{
//				cnt += (abs(arr_neg.back()) * 2);
//			}
//			for (int i = 0; i < book; i++)
//			{
//				if (arr_neg.size() > 0)
//				{
//					arr_neg.pop_back();
//				}
//			}
//		}
//		while (arr_pos.size() > 0)
//		{
//			cnt += (abs(arr_pos.back()) * 2);
//			for (int i = 0; i < book; i++)
//			{
//				if (arr_pos.size() > 0)
//				{
//					arr_pos.pop_back();
//				}
//			}
//		}
//	}
//	else
//	{
//		while (arr_neg.size() > 0)
//		{
//			
//			cnt += (abs(arr_neg.back()) * 2);
//			for (int i = 0; i < book; i++)
//			{
//				if (arr_neg.size() > 0)
//				{
//					arr_neg.pop_back();
//				}
//			}
//		}
//		while (arr_pos.size() > 0)
//		{
//			if (arr_pos.size() == first_size_of_arr_pos)
//			{
//				cnt += abs(arr_pos.back());
//			}
//			else
//			{
//				cnt += (abs(arr_pos.back()) * 2);
//			}
//			for (int i = 0; i < book; i++)
//			{
//				if (arr_pos.size() > 0)
//				{
//					arr_pos.pop_back();
//				}
//			}
//		}
//	}
//
//	cout << cnt;
//}