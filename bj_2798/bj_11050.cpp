//#include <iostream>
//
//using namespace std;
//
//int gcb(int a, int b)
//{
//	if (a < b)
//	{
//		swap(a, b);
//	}
//	int c = a % b;
//	if (c == 0)
//		return b;
//	else
//		return gcb(b, c);
//}
//
//int fac(int a)
//{
//	if (a <= 1)
//		return 1;
//	else
//		return a * fac(a - 1);
//
//}
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	int tmp = fac(N);
//	int tmp2 = fac(N - M);
//	int tmp3 = fac(M);
//	cout << tmp / tmp2 / tmp3;
//}