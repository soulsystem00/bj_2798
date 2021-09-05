//#include <iostream>
//#include <queue>
//#include <stdlib.h>
//
//using namespace std;
//
//typedef struct Position
//{
//	int pos;
//	int time;
//}Pos;
//
//int main()
//{
//	int max, cur, goal, up, down;
//	cin >> max >> cur >> goal >> up >> down;
//
//	int* arr = (int*)calloc((max+2),sizeof(int));
//	queue<Pos> q;
//	Pos tmp;
//	tmp.pos = cur;
//	tmp.time = 0;
//	q.push(tmp);
//	arr[cur] = 1;
//	while (true)
//	{
//		if (q.empty())
//		{
//			cout << "use the stairs";
//			return 0;
//		}
//
//		if (q.front().pos != goal)
//		{
//			auto tmp = q.front();
//			q.pop();
//
//			Pos tmp1 = tmp;
//			Pos tmp2 = tmp;
//
//			tmp1.pos += up;
//			tmp2.pos -= down;
//
//			tmp1.time++;
//			tmp2.time++;
//
//			if (tmp1.pos <= max)
//			{
//				if (arr[tmp1.pos] == 0)
//				{
//					q.push(tmp1);
//					arr[tmp1.pos] = 1;
//				}
//			}
//
//			if (tmp2.pos <= max && tmp2.pos >= 1)
//			{
//				if (arr[tmp2.pos] == 0)
//				{
//					q.push(tmp2);
//					arr[tmp2.pos] = 1;
//				}
//			}
//		}
//		else if (q.front().pos == goal)
//		{
//			cout << q.front().time;
//			break;
//		}
//	}
//}