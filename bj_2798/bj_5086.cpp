//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	while ((N&&M)!=0)
//	{
//		bool check = false;
//		if (N < M)
//		{
//			if (M % N == 0)
//			{
//				cout << "factor" << endl;
//			}
//			else
//			{
//				check = true;
//			}
//		}
//		else if (N > M)
//		{
//			if (N % M == 0)
//			{
//				cout << "multiple" << endl;
//			}
//			else
//			{
//				check = true;
//			}
//		}
//		if (check)
//		{
//			cout << "neither" << endl;
//		}
//		cin >> N >> M;
//	}
//}