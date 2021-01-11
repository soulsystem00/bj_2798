#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

typedef struct Number
{
	int num;
	int count;
}Number;

void merge(int list[], int first, int mid, int end)
{
	int size = end - first + 1;
	int* tmp = (int*)malloc(sizeof(int) * size);


	int i = first;
	int j = mid + 1;
	int k = 0;

	while (i <= mid && j <= end)
	{
		if (list[i] <= list[j])
		{
			tmp[k] = list[i];
			k++;
			i++;
		}
		else
		{
			tmp[k] = list[j];
			k++;
			j++;
		}
	}

	if (i > mid)
	{
		for (int l = j; l <= end; l++)
		{
			tmp[k] = list[l];
			k++;
		}
	}

	else
	{
		for (int l = i; l <= mid; l++)
		{
			tmp[k] = list[l];
			k++;
		}
	}

	k = 0;
	for (int l = first; l <= end; l++)
	{
		list[l] = tmp[k++];
	}

	free(tmp);
}


void merge_sort(int list[], int first, int end)
{
	int mid = (first + end) / 2;
	if (first < end)
	{
		merge_sort(list, first, mid);
		merge_sort(list, mid + 1, end);
		merge(list, first, mid, end);
	}
}

void _sort(vector<Number>* result)
{
	for (int i = 0; i < (*result).size() - 1; i++)
	{
		for (int j = i + 1; j < (*result).size(); j++)
		{
			if ((*result)[i].count < (*result)[j].count)
			{
				swap((*result)[i], (*result)[j]);
			}
		}
	}
}

void _sort(int* arr, int N)
{
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

void Avr(int* arr, int N)
{
	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += (double)arr[i];
	}
	cout << round(sum / (double)N) << endl;

}

void Mid(int* arr, int N)
{
	cout << arr[N / 2] << endl;
}

void Range(int* arr, int N)
{
	int tmp;
	tmp = arr[N - 1] - arr[0];
	cout << tmp << endl;
}

void printchoibingap(vector<Number> result)
{
	if (result.size() > 1)
	{
		if (result[0].count > result[1].count)
		{
			cout << result[0].num << endl;
		}
		else if (result[0].count == result[1].count)
		{
			cout << result[1].num << endl;
		}
	}
	else
	{
		cout << result[0].num << endl;
	}
}

void choibingap(int* arr, int N)
{
	vector<Number> result;
	Number tmp;
	tmp.num = arr[0];
	tmp.count = 1;
	for (int i = 1; i < N; i++)
	{
		if (arr[i] != tmp.num)
		{
			result.push_back(tmp);
			tmp.num = arr[i];
			tmp.count = 1;
		}
		else if (arr[i] == tmp.num)
		{
			tmp.count++;
		}
	}
	result.push_back(tmp);
	_sort(&result);
	printchoibingap(result);

}



int main()
{
	int N;
	cin >> N;
	int* arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	merge_sort(arr, 0, N - 1);
	//sort(&arr, &arr + (N-1));
	//_sort(arr, N);

	//for (int i = 0; i < N; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;

	Avr(arr, N);

	Mid(arr, N);

	choibingap(arr, N);

	Range(arr, N);
}