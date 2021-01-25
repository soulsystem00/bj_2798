//#include <iostream>
//
//using namespace std;
//
//int result1(int N)
//{
//	int cnt1 = 0;
//	for (long long i = 5; i <= N; i *= 5)
//	{
//		cnt1 += N / i;
//	}
//	return cnt1;
//}
//
//int result2(int N)
//{
//	int cnt1 = 0;
//	for (long long i = 2; i <= N; i *= 2)
//	{
//		cnt1 += N / i;
//	}
//	return cnt1;
//}
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	int O = N - M;
//	int tmp1 = result1(N);
//	int tmp2 = result1(O);
//	int tmp3 = result1(M);
//
//	int tmp4 = result2(N);
//	int tmp5 = result2(O);
//	int tmp6 = result2(M);
//	if ((tmp1 - tmp2 - tmp3) < (tmp4 - tmp5 - tmp6))
//	{
//		cout << tmp1 - tmp2 - tmp3 << endl;
//	}
//	else
//	{
//		cout << tmp4 - tmp5 - tmp6 << endl;
//	}
//	
//}