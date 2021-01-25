//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int num;
//	cin >> num;
//	cin.ignore();
//	int* arr =(int*)malloc(0);
//	int size = 0;
//	for (int i = 0; i < num; i++)
//	{
//		
//		string str;
//		getline(cin, str);
//		if (str.length() >= 6)
//		{
//			size++;
//			arr = (int*)realloc(arr, size * sizeof(int));
//			//cout << atoi(str.substr(5, str.length()).c_str()) << endl;
//			arr[size - 1] = atoi(str.substr(5, str.length()).c_str());
//			//cout << arr[size - 1] << endl;
//		}
//		if (str.length() == 5)
//		{
//			if (size == 0)
//			{
//				cout << 1 << endl;
//			}
//			else
//			{
//				cout << 0 << endl;
//			}
//		}
//		if (str.length() == 4)
//		{
//			cout << size << endl;
//		}
//		if (str == "top")
//		{
//			if (size == 0)
//			{
//				cout << -1 << endl;
//			}
//			else
//			{
//				cout << arr[size - 1] << endl;
//			}
//		}
//		if (str == "pop")
//		{
//			if (size == 0)
//			{
//				cout << -1 << endl;
//			}
//			else
//			{
//				cout << arr[size - 1] << endl;
//				size--;
//				arr = (int*)realloc(arr, size * sizeof(int));
//			}
//		}
//	}
//}