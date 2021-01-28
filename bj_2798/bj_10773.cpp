//#include <iostream>
//
//using namespace std;
//
//void pr(int* arr, int size);
//
//void push(int& size, int*& arr, int tmp);
//
//void pop(int& size, int*& arr);
//
//
//int main()
//{
//	int num;
//	cin >> num;
//	int* arr = (int*)malloc(0);
//	int size = 0;
//	for (int i = 0; i < num; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		if (tmp == 0)
//		{
//			//pop(size, arr);
//			size--;
//			arr = (int*)realloc(arr, sizeof(int) * size);
//			
//		}
//		else
//		{
//			//push(size, arr, tmp);
//			size++;
//			arr = (int*)realloc(arr, sizeof(int) * size);
//			arr[size - 1] = tmp;
//		}
//	}
//	pr(arr,size);
//}
//
//void pop(int& size, int*& arr)
//{
//	size--;
//	int* tmp2 = (int*)malloc(sizeof(int) * size);
//	for (int i = 0; i < size; i++)
//	{
//		tmp2[i] = arr[i];
//	}
//	free(arr);
//	if (size == 0)
//	{
//		*arr = NULL;
//	}
//	else
//	{
//		arr = tmp2;
//	}
//}
//
//void push(int& size, int*& arr, int tmp)
//{
//	size++;
//	int* tmp2 = (int*)malloc(sizeof(int) * size);
//	for (int i = 0; i < size - 1; i++)
//	{
//		tmp2[i] = arr[i];
//	}
//	tmp2[size - 1] = tmp;
//	free(arr);
//	arr = tmp2;
//}
//
//void pr(int* arr, int size)
//{
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum += arr[i];
//	}
//	cout << sum << endl;
//}