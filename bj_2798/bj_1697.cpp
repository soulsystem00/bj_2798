//#include <iostream>
//#include <queue>
//using namespace std;
//
//typedef struct Position
//{
//	int pos;
//	int time;
//}Pos;
//
//bool CheckArr[1000001];
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	queue<Position> q;
//
//	Pos tmp;
//	tmp.pos = n;
//	tmp.time = 0;
//	q.push(tmp);
//
//	while (true)
//	{
//		if (q.front().pos != k)
//		{
//			auto tmp1 = q.front();
//			auto tmp2 = q.front();
//			auto tmp3 = q.front();
//			q.pop();
//			tmp1.time++;
//			tmp2.time++;
//			tmp3.time++;
//
//			tmp1.pos++;
//			tmp2.pos--;
//			tmp3.pos *= 2;
//			if (tmp1.pos <= 100000)
//			{
//				if (CheckArr[tmp1.pos] == 0)
//				{
//					q.push(tmp1);
//					CheckArr[tmp1.pos] = 1;
//				}
//			}
//				
//			if (tmp2.pos <= 100000 && tmp2.pos >= 0)
//			{
//				if (CheckArr[tmp2.pos] == 0)
//				{
//					q.push(tmp2);
//					CheckArr[tmp2.pos] = 1;
//				}
//			}
//				
//			if (tmp3.pos <= 100000)
//			{
//				if (CheckArr[tmp3.pos] == 0)
//				{
//					q.push(tmp3);
//					CheckArr[tmp3.pos] = 1;
//				}
//			}
//				
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	cout << q.front().time;
//}