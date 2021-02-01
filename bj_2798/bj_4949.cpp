//#include <iostream>
//#include <string>
//using namespace std;
//
//class STACK
//{
//public:
//	char* arr;
//	int size;
//
//	STACK();
//	bool pop();
//	void push(char tmp);
//	bool isEmpty();
//	char peek();
//};
//
//STACK::STACK()
//{
//	this->size = 0;
//	this->arr = (char*)malloc(size);
//}
//
//char STACK::peek()
//{
//	if (!isEmpty())
//		return (this->arr)[size - 1];
//	else
//		return 0;
//}
//
//bool STACK::isEmpty()
//{
//	return this->size == 0;
//}
//
//void STACK::push(char tmp)
//{
//	(this->size)++;
//	arr = (char*)realloc(this->arr, this->size);
//	arr[size - 1] = tmp;
//}
//
//bool STACK::pop()
//{
//	if (!isEmpty())
//	{
//		(this->size)--;
//		arr = (char*)realloc(this->arr, this->size);
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	while (1)
//	{
//		string str;
//		getline(cin, str);
//		STACK s = STACK();
//		bool check = true;
//		if (str == ".")
//			return 0;
//		for (int i = 0; i < str.length(); i++)
//		{
//			if (str[i] == '(')
//				s.push('(');
//			if (str[i] == '[')
//				s.push('[');
//			if (str[i] == ')')
//			{
//				if (s.peek() == '(')
//					s.pop();
//				else
//				{
//					check = false;
//					break;
//				}
//			}
//			if (str[i] == ']')
//			{
//				if (s.peek() == '[')
//					s.pop();
//				else
//				{
//					check = false;
//					break;
//				}
//			}
//		}
//		if (check)
//		{
//			if (s.isEmpty())
//			{
//				cout << "yes" << endl;
//			}
//			else
//			{
//				cout << "no" << endl;
//			}
//		}
//		else
//		{
//			cout << "no" << endl;
//		}
//		
//	}
//}