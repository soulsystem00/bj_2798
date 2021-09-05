//#include <iostream>
//
//using namespace std;
//
//string Bin_Function(int n)
//{
//	string tmp = "";
//	int cnt(0);
//
//	int num;
//
//	n = n % 28;
//
//	if (n == 0)
//	{
//		n = 2;
//	}
//	else if (n > 0 && n < 16)
//	{
//		n = n;
//	}
//	else
//	{
//		switch (n)
//		{
//		case 16:
//			n = 14;
//			break;
//		case 17:
//			n = 13;
//			break;
//		case 18:
//			n = 12;
//			break;
//		case 19:
//			n = 11;
//			break;
//		case 20:
//			n = 10;
//			break;
//		case 21:
//			n = 9;
//			break;
//		case 22:
//			n = 8;
//			break;
//		case 23:
//			n = 7;
//			break;
//		case 24:
//			n = 6;
//			break;
//		case 25:
//			n = 5;
//			break;
//		case 26:
//			n = 4;
//			break;
//		case 27:
//			n = 3;
//			break;
//		default:
//			break;
//		}
//	}
//
//	while (cnt != 4)
//	{
//		if (n % 2 == 0)
//			tmp = "V" + tmp;
//		else
//			tmp = "µþ±â" + tmp;
//
//		n /= 2;
//		cnt++;
//	}
//
//	return tmp;
//}
//
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << Bin_Function(arr[i]) << endl;
//	}
//}