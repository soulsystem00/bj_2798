//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	long long arr[101];
//	arr[0] = 1;
//	arr[1] = 1;
//	arr[2] = 1;
//	for (int i = 3; i < 101; i++)
//	{
//		arr[i] = arr[i - 3] + arr[i - 2];
//	}
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << arr[i] << " ";
//	//}
//	//cout << endl;
//
//	int num;
//	cin >> num;
//	for (int i = 0; i < num; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		cout << arr[tmp - 1] << endl;
//	}
//}