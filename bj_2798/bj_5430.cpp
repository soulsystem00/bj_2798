//#include <iostream>
//#include <deque>
//#include <string>
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int T;
//	cin >> T;
//	for (int t = 0; t < T; t++)
//	{
//		try
//		{
//			bool error(false);
//			string str;
//			string arr_input;
//			int n;
//			deque<int> dq;
//			cin >> str >> n >> arr_input;
//
//			string num;
//			for (auto i : arr_input)
//			{
//				if (i == '[' || i == ' ')
//					continue;
//				else if (i == ',' || i == ']')
//				{
//					if (!num.empty())
//					{
//						dq.push_back(stoi(num));
//						num.clear();
//					}
//
//				}
//				else
//				{
//					num.push_back(i);
//				}
//			}
//
//			bool r(false);
//
//			for (auto i : str)
//			{
//				if (i == 'R')
//				{
//					r = !r;
//				}
//				else if (i == 'D')
//				{
//					if (dq.empty())
//					{
//						error = true;
//						break;
//					}
//					else
//					{
//						if (r)
//							dq.pop_back();
//						else
//							dq.pop_front();
//					}
//				}
//			}
//			if (error)
//			{
//				cout << "error" << '\n';
//			}
//			else
//			{
//				cout << '[';
//				if (r)
//				{
//					for (int i = dq.size() - 1; i >= 0; i--)
//					{
//						if (i == 0)
//							cout << dq[i];
//						else
//							cout << dq[i] << ',';
//					}
//				}
//				else
//				{
//					for (int i = 0; i < dq.size(); i++)
//					{
//						if (i == dq.size() - 1)
//							cout << dq[i];
//						else
//							cout << dq[i] << ',';
//					}
//				}
//				cout << ']' << '\n';
//				
//			}
//		}
//		catch (const std::exception&)
//		{
//			cout << "error" << '\n';
//		}
//	}
//	return 0;
//}