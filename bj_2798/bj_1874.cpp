//#include <iostream>
//#include <string>
//using namespace std;
//
//class STACK
//{
//public:
//	int* arr;
//	int size;
//
//	STACK();
//	bool pop();
//	void push(int tmp);
//	bool isEmpty();
//	int peek();
//	void print();
//};
//
//STACK::STACK()
//{
//	this->size = 0;
//	this->arr = (int*)malloc(size);
//}
//
//int STACK::peek()
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
//void STACK::push(int tmp)
//{
//	(this->size)++;
//	arr = (int*)realloc(this->arr, sizeof(int) * this->size);
//	arr[size - 1] = tmp;
//}
//
//bool STACK::pop()
//{
//	if (!isEmpty())
//	{
//		(this->size)--;
//		arr = (int*)realloc(this->arr, sizeof(int) * this->size);
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void STACK::print()
//{
//	for (int i = 0; i < this->size; i++)
//	{
//		cout << (this->arr)[i] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int num;
//	cin >> num;
//	int* arr = new int[num];
//	int index = 0;
//	for (int i = 0; i < num; i++)
//	{
//		cin >> arr[i];
//	}
//
//	STACK s = STACK();
//	STACK a = STACK();
//	for (int i = 1; i <= num; )
//	{
//		if (s.isEmpty())
//		{
//			s.push(i);
//			a.push('+');
//			//cout << "+" << endl;
//			i++;
//		}
//		else
//		{
//			if (s.peek() == arr[index])
//			{
//				s.pop();
//				a.push('-');
//				//cout << "-" << endl;
//				index++;
//			}
//			else
//			{
//				s.push(i);
//				a.push('+');
//				//cout << "+" << endl;
//				i++;
//			}
//		}
//	}
//
//	while (!s.isEmpty())
//	{
//		if (s.peek() == arr[index])
//		{
//			s.pop();
//			a.push('-');
//			//cout << "-" << endl;
//			index++;
//		}
//		else
//		{
//			cout << "NO" << endl;
//			return 0;
//		}
//	}
//
//	for (int i = 0; i < a.size; i++)
//	{
//		printf("%c\n", a.arr[i]);
//	}
//}