//#include <iostream>
//#include <random>
//#include <string>
//#include <time.h>
//#include <algorithm>
//#include<map>
//using namespace std;
//
//bool solution(vector<string> phone_book)
//{
//	//sort(phone_book.begin(), phone_book.end());
//	map<string, int> m;
//	for (auto tmp : phone_book)
//	{
//		string asdf;
//		for (auto tmp2 : tmp)
//		{
//			asdf.push_back(tmp2);
//			if (m[asdf] == 0)
//			{
//				if (asdf == tmp)
//					m[asdf] = 1;
//			}
//			else
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//
//int main()
//{
//	vector<string> phone_book = { "113", "44", "4544" };
//	cout << solution(phone_book);
//}