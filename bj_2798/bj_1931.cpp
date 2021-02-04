//#include <iostream>
//
//using namespace std;
//
//typedef struct Point
//{
//	int x;
//	int y;
//	int z;
//}Point;

//void merge(Point list[], int first, int mid, int end)
//{
//	int size = end - first + 1;
//	Point* tmp = (Point*)malloc(sizeof(Point) * size);
//
//
//	int i = first;
//	int j = mid + 1;
//	int k = 0;
//
//	while (i <= mid && j <= end)
//	{
//		if (list[i].y < list[j].y)
//		{
//			tmp[k] = list[i];
//			k++;
//			i++;
//		}
//		else if (list[i].y == list[j].y && list[i].x < list[j].x)
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
//void merge_sort(Point list[], int first, int end)
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
//void  print(Point* arr, int N)
//{
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d %d\n", arr[i].x, arr[i].y);
//	}
//}
//int main()
//{
//	int N;
//	cin >> N;
//	int start = 0;
//	int end = 0;
//	int cnt = 0;
//	Point* arr = (Point*)malloc(sizeof(Point) * N);
//	int min = 2147483647;
//	int max = 0;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i].x >> arr[i].y;
//		arr[i].z = arr[i].y - arr[i].x;
//		if (min > arr[i].x)
//			min = arr[i].x;
//		if (max < arr[i].y)
//			max = arr[i].y;
//	}
//
//	merge_sort(arr, 0, N - 1);
//	start = arr[0].x;
//	end = arr[0].y;
//	cnt++;
//	for (int i = 1; i < N; i++)
//	{
//		if (arr[i].x >= end && arr[i].y >= end)
//		{
//			cnt++;
//			start = arr[i].x;
//			end = arr[i].y;
//		}
//	}
//	cout << cnt;
//}


//// 정렬 안하는 코드
//// 정렬을 안하면 틀림
////
////#include <iostream>
////
////using namespace std;
////typedef struct Point
////{
////	int x;
////	int y;
////}Point;
////
////int main()
////{
////	int N;
////	cin >> N;
////	int start = 0;
////	int end = 0;
////	int cnt = 0;
////	Point* arr = (Point*)malloc(sizeof(Point) * N);
////	for (int i = 0; i < N; i++)
////	{
////		cin >> arr[i].x >> arr[i].y;
////	}
////
////	start = arr[0].x;
////	end = arr[0].y;
////	cnt++;
////	for (int i = 1; i < N; i++)
////	{
////		if (arr[i].x >= end && arr[i].y >= end)
////		{
////			cnt++;
////			start = arr[i].x;
////			end = arr[i].y;
////		}
////	}
////	cout << cnt;
////}