//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//bool checkint(string s)
//{
//	int num;
//	try
//	{
//		num = stoi(s);
//	}
//	catch (const std::exception&)
//	{
//		return false;
//	}
//	
//	string ss = to_string(num);
//	
//	return ss == s;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//	map<int, string> arr;
//	map<string, int> arr2;
//	for (int i = 1; i <= n; i++)
//	{
//		string tmp;
//		cin >> tmp;
//		arr[i] = tmp;
//		arr2[tmp] = i;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		string tmp;
//		cin >> tmp;
//		if (checkint(tmp))
//		{
//			cout << arr[stoi(tmp)] << '\n';
//		}
//		else
//		{
//			cout << arr2[tmp] << '\n';
//		}
//	}
//}