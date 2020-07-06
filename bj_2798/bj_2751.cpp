//#include <iostream>
//#include <math.h>
//using namespace std;
//
//void merge(int list[], int first, int mid, int end)
//{
//	int size = end - first + 1;
//	int* tmp = (int*)malloc(sizeof(int) * size);
//
//
//	int i = first;
//	int j = mid + 1;
//	int k = 0;
//
//	while(i <= mid && j <= end)
//	{
//		if (list[i] <= list[j])
//		{
//			tmp[k] = list[i];
//			k++;
//			i++;
//		}
//		else
//		{
//			tmp[k] = list[j];
//			k++;
//			j++;
//		}
//	}
//
//	if (i > mid)
//	{
//		for (int l = j; l <= end; l++)
//		{
//			tmp[k] = list[l];
//			k++;
//		}
//	}
//
//	else
//	{
//		for (int l = i; l <= mid; l++)
//		{
//			tmp[k] = list[l];
//			k++;
//		}
//	}
//
//	k = 0;
//	for (int l = first; l <= end; l++)
//	{
//		list[l] = tmp[k++];
//	}
//
//	free(tmp);
//}
//
//
//void merge_sort(int list[], int first, int end)
//{
//	int mid = (first + end) / 2;
//	if (first < end)
//	{
//		merge_sort(list, first, mid);
//		merge_sort(list, mid + 1, end);
//		merge(list, first, mid, end);
//	}
//}
//
//int main()
//{
//	int size;
//	cin >> size;
//	int* num = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		cin >> num[i];
//	}
//
//	merge_sort(num, 0, size - 1);
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d\n", num[i]);
//	}
//}
//
////void merge(int list[], int left, int mid, int right)
////{
////	int i, j, k, l;
////	i = left; j = mid + 1; k = left;
////
////	while (i <= mid && j <= right)
////	{
////		if (list[i] <= list[j])
////			sorted[k++] = list[i++];
////		else
////			sorted[k++] = list[j++];
////	}
////
////	if (i > mid) // 전위 배열이 비었을때
////	{
////		for (l = j; l <= right; l++)
////		{
////			sorted[k++] = list[l];
////		}
////	}
////	else // 후위 배열이 비었을때
////	{
////		for (l = i; l <= mid; l++)
////		{
////			sorted[k++] = list[l];
////		}
////	}
////	for (l = left; l <= right; l++)
////	{
////		list[l] = sorted[l];
////	}
////}
////
////void merge_sort(int list[], int left, int right)
////{
////	int mid;
////	if (left < right)
////	{
////		mid = (left + right) / 2;
////		merge_sort(list, left, mid);
////		merge_sort(list, mid + 1, right);
////		merge(list, left, mid, right);
////	}
//////}
////int main()
////{	
////	int size;
////	cin >> size;
////	int* arr = (int*)malloc(sizeof(int) * size);
////
////	for (int i = 0; i < size; i++)
////	{
////		cin >> arr[i];
////	}
////
////	merge_sort(arr, 0, size-1);
////
////	for (int i = 0; i < size; i++)
////	{
////		cout << arr[i];
////	}
////}