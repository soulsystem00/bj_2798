//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int num;
//	cin >> num;
//	for (int j = 0; j < num; j++)
//	{
//		string str;
//		cin >> str;
//		int size = 0;
//		for (int i = 0; i < str.length(); i++)
//		{
//			if (str[i] == '(')
//			{
//				size++;
//			}
//			else if(str[i] == ')')
//			{
//				size--;
//				if(size < 0)
//				{
//					break;
//				}
//			}
//		}
//		if (size == 0)
//		{
//			cout << "YES" << endl;
//		}
//		else
//		{
//			cout << "NO" << endl;
//		}
//	}
//	
//}