//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	int max;
//	int min;
//	if (N > M)
//	{
//		max = N;
//		min = M;
//	}
//	else
//	{
//		max = M;
//		min = N;
//	}
//	int i = min;
//	for (;; i--)
//	{
//		if (N % i == 0 && M % i == 0)
//		{
//			cout << i << endl;
//			break;
//		}
//	}
//	//cout << i * min << endl;
//
//	i = max;
//	for (;; i++)
//	{
//		if (i % N == 0 && i % M == 0)
//		{
//			cout << i << endl;
//			break;
//		}
//	}
//}