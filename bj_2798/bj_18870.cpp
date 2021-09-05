//#include <iostream>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	map<int, int> m;
//	
//	for (int i = 0; i < n; i++)
//	{
//		m[arr[i]] = 0;
//	}
//
//	int num(0);
//	for (auto i : m)
//	{
//		m[i.first] = num++;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << m[arr[i]] << " ";
//	}
//}