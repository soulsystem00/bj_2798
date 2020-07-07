#include <iostream>

using namespace std;

void my_merge(int arr[], int first, int mid, int last)
{
	int size = last - first + 1;
	int* tmp = new int[size];

	int i = first; 
	int j = mid + 1; 
	int k = 0; // k is tmp's index

	while ( i<=mid && j <= last)
	{
		if (arr[i] < arr[j])
		{
			tmp[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			tmp[k] = arr[j];
			k++;
			j++;
		}
	}

	if (i < mid + 1)
	{
		for (int l = i; l <= mid; l++)
		{
			tmp[k] = arr[l];
			k++;
		}
	}
	else
	{
		for (int l = j; l <= last; l++)
		{
			tmp[k] = arr[l];
			k++;
		}
	}

	k = 0;
	for (int l = first; l <= last; l++)
	{
		arr[l] = tmp[k];
		k++;
	}

	delete[] tmp;
}

void my_merge_sort(int arr[], int first, int last)
{
	int mid = (first + last) / 2;

	if (first < last)
	{
		my_merge_sort(arr, first, mid);
		my_merge_sort(arr, mid + 1, last);
		my_merge(arr, first, mid, last);
	}
}
int main()
{
	int size;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	//sort arr
	my_merge_sort(arr, 0, size - 1);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
}