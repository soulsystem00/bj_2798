//#include <iostream>
//#include <set>
//#include <string>
//using namespace std;
//
//int arr[21];
//
//int main()
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	cin.ignore();
//	for (int t = 0; t < n; t++)
//	{
//		
//		string str;
//		getline(cin, str);
//
//		if (str.substr(0, 3) == "add")
//		{
//			int tmp = stoi(str.substr(4, str.length()));
//			arr[tmp] = 1;
//		}
//		else if (str.substr(0, 6) == "remove")
//		{
//			int tmp = stoi(str.substr(7, str.length()));
//			arr[tmp] = 0;
//		}
//		else if (str.substr(0, 5) == "check")
//		{
//			int tmp = stoi(str.substr(6, str.length()));
//			cout << arr[tmp] << '\n';
//		}
//		else if (str.substr(0, 6) == "toggle")
//		{
//			int tmp = stoi(str.substr(7, str.length()));
//			arr[tmp] = !arr[tmp];
//		}
//		else if (str.substr(0, 3) == "all")
//		{
//			for (int i = 1; i <= 20; i++)
//			{
//				arr[i] = 1;
//			}
//		}
//		else if (str.substr(0, 5) == "empty")
//		{
//			for (int i = 1; i <= 20; i++)
//			{
//				arr[i] = 0;
//			}
//		}
//	}
//}