//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//	stack<int> s;
//	string tmp;
//	bool check = false;
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] != '+' && str[i] != '-')
//		{
//			tmp.push_back(str[i]);
//		}
//		else
//		{
//			s.push(atoi(tmp.c_str()));
//			tmp.clear();
//			if (check)
//			{
//				int num1 = s.top();
//				s.pop();
//				int num2 = s.top();
//				s.pop();
//				s.push(num1 + num2);
//				check = false;
//			}
//		}
//
//		if (str[i] == '+')
//		{
//			check = true;
//		}
//	}
//
//	s.push(atoi(tmp.c_str()));
//	tmp.clear();
//	if (check)
//	{
//		int num1 = s.top();
//		s.pop();
//		int num2 = s.top();
//		s.pop();
//		s.push(num1 + num2);
//		check = false;
//	}
//	//while (!s.empty())
//	//{
//	//	cout << s.top() << endl;
//	//	s.pop();
//	//}
//
//	while (s.size() > 2)
//	{
//		int num1 = s.top();
//		s.pop();
//		int num2 = s.top();
//		s.pop();
//
//		s.push(num2 + num1);
//	}
//
//	if (s.size() == 2)
//	{
//		int num1 = s.top();
//		s.pop();
//		int num2 = s.top();
//		s.pop();
//		cout << num2 - num1 << endl;
//	}
//	else
//	{
//		cout << s.top();
//	}
//
//}