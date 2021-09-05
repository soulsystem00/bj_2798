//#include <iostream>
//
//using namespace std;;
//
//int main()
//{
//	string num;
//	while (true)
//	{
//		cin >> num;
//		if (num == "0")
//			break;
//		int start = 0;
//		int end = num.length() - 1;
//		bool check(true);
//		while (start < end)
//		{
//			if (num[start] == num[end])
//			{
//				start++; end--;
//			}
//			else
//			{
//				check = false; break;
//			}
//		}
//		check ? cout << "yes" << '\n' : cout << "no" << '\n';
//	}
//}