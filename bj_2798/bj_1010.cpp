#include <iostream>

using namespace std;
int arr[35][35];

int getresult(int N, int M)
{
	if (M == 0)
	{
		return 1;
	}
	else if (N == 1 && M == 1)
	{
		return 1;
	}
	else if (N == M)
	{
		return 1;
	}
	else
	{
		return getresult(N - 1, M - 1) + getresult(N - 1, M);
	}
}


int main()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int N, M;
		cin >> N >> M;
		printf("%d\n", getresult(M, N));
	}
}