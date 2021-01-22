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
//int main()
//{
//	int num;
//	cin >> num;
//	int* arr = new int[num];
//	for (int i = 0; i < num; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 1; i < num; i++)
//	{
//		int tmp = gcb(arr[0],arr[i]);
//		cout << arr[0] / tmp << "/" << arr[i] / tmp << endl;
//	}
//}