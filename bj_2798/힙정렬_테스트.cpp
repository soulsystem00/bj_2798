#include <iostream>

using namespace std;
void check_heap2(int tmp[], int index, int size);
int num;
void delete_heap(int arr[],int tmp[],int size)
{
	if (size > 0)
	{
		arr[num+2 - size] = tmp[1];
		tmp[1] = tmp[size - 1];

		check_heap2(tmp, 1, size);
		size--;
		delete_heap(arr, tmp, size);
	}
	
}
void check_heap(int tmp[], int index)
{
	if (index / 2 != 0)
	{
		if (tmp[index] < tmp[index / 2])
		{
			swap(tmp[index], tmp[index / 2]);
			check_heap(tmp, index / 2);
		}
	}
}

void check_heap2(int tmp[], int index,int size)
{
	if (index * 2 < size)
	{
		if (tmp[index] > tmp[index * 2])
		{
			swap(tmp[index], tmp[index * 2]);
			check_heap2(tmp, index * 2, size);
		}
	}
	if (index * 2 + 1 < size)
	{
		if (tmp[index] > tmp[index * 2 + 1])
		{
			swap(tmp[index], tmp[index * 2 + 1]);
			check_heap2(tmp, index * 2 + 1, size);
		}
	}
}

void insert_heap(int arr[], int tmp[], int* tsize,int size)
{
	tmp[*tsize] = arr[*tsize];
	check_heap(tmp, *tsize);
	*tsize = *tsize + 1;
	if (*tsize < size)
		insert_heap(arr, tmp, tsize, size);

	

}
int main()
{
	
	cin >> num;

	int* arr = new int [(num+1)];

	for (int i = 1; i <= num; i++)
	{
		cin >> arr[i];
	}

	int* tmp = new int[(num+1)];
	int tsize = 1;
	// ÈüÁ¤·Ä
	insert_heap(arr, tmp, &tsize, num+1);
	delete_heap(arr, tmp, num + 1);
	for (int i = 1; i < num + 1; i++)
	{
		printf("%d\n", arr[i]);
	}
}