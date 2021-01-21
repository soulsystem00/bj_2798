//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int loop;
//	cin >> loop;
//	for (int i = 0; i < loop; i++)
//	{
//		int N, M;
//		cin >> N >> M;
//		if (N > M)
//		{
//			swap(N, M);
//		}
//		int j = N;
//		for (;; j--)
//		{
//			if (N % j == 0 && M % j == 0)
//			{
//				break;
//			}
//		}
//		cout << (N / j) * M << endl;
//	}
//}