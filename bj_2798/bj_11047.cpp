//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N, K;
//	cin >> N >> K;
//	int* arr = new int[N];
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//	int cnt = 0;
//	int i = N - 1;
//	while (K != 0)
//	{
//		cnt += K / arr[i];
//		K -= arr[i] * (K / arr[i]);
//		i--;
//	}
//	cout << cnt;
//}