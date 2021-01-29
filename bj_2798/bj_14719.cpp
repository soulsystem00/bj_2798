//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> M >> N;
//	int* arr = new int[N];
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//	int cnt = 0;
//	for (int i = 1; i < N - 1; i++)
//	{
//		int left = i - 1;
//		int right = i + 1;
//		int lmax = -1;
//		int rmax = -1;
//		while (true)
//		{
//			if (left < 0)
//			{
//				break;
//			}
//
//			if (arr[left] > lmax)
//			{
//				lmax = arr[left];
//			}
//			left--;
//		}
//
//		while (true)
//		{
//			if (right >= N)
//			{
//				break;
//			}
//
//			if (arr[right] > rmax)
//			{
//				rmax = arr[right];
//			}
//			right++;
//		}
//
//		if (arr[i] < lmax && arr[i] < rmax && arr[i] < M)
//		{
//			if (lmax < rmax)
//			{
//				cnt = cnt + (lmax - arr[i]);
//				arr[i] = lmax;
//			}
//			else
//			{
//				cnt = cnt + (rmax - arr[i]);
//				arr[i] = rmax;
//			}
//		}
//		for (int i = 0; i < N; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	cout << cnt;
//}