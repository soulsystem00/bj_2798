#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
int factorial(int num)
{
	if (num == 1)
		return 1;
	else if (num == 0)
		return 1;
	else
		return num * factorial(num - 1);
}

int main()
{
	int num;
	scanf("%d", &num);

	printf("%d", factorial(num));
}