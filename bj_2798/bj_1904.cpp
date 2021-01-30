//#include<iostream>
//
//using namespace std;
//
//int arr[1000001];
//int main()
//{
//	arr[0] = 1;
//	arr[1] = 2;
//	for (int i = 2; i < 1000001; i++)
//	{
//		arr[i] = (arr[i - 2] + arr[i - 1]) % 15746;
//	}
//
//	int num;
//	cin >> num;
//
//	cout << arr[num-1];
//}