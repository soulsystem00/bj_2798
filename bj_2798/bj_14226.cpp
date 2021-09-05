//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int arr[3000][3000];
//
//typedef struct Position
//{
//	int pos;
//	int time;
//	int clip;
//}Pos;
//
//int main()
//{
//	int n;
//	cin >> n;
//	
//	Pos tmp = { 1,0,0 };
//	queue<Pos> q;
//	q.push(tmp);
//	while (true)
//	{
//		if (q.empty())
//		{
//			//cout << "Error";
//			break;
//		}
//
//		if (q.front().pos != n)
//		{
//			auto tmp = q.front();
//			q.pop();
//
//			auto tmp1 = tmp;
//			auto tmp2 = tmp;
//			auto tmp3 = tmp;
//
//			tmp1.clip = tmp1.pos;
//			tmp1.time += 1;
//
//			if (tmp2.clip != 0)
//			{
//				tmp2.pos += tmp2.clip;
//				tmp2.time += 1;
//			}
//			
//			tmp3.pos -= 1;
//			tmp3.time += 1;
//
//			if (tmp1.pos <= 2222)
//			{
//				if (arr[tmp1.pos][tmp1.clip] == 0)
//				{
//					q.push(tmp1);
//					arr[tmp1.pos][tmp1.clip] = 1;
//				}
//			}
//
//			if (tmp2.pos <= 2222 && tmp2.clip != 0)
//			{
//				if (arr[tmp2.pos][tmp2.clip] == 0)
//				{
//					q.push(tmp2);
//					arr[tmp2.pos][tmp2.clip] = 1;
//				}
//			}
//
//			if (tmp3.pos <= 2222 && tmp3.pos >= 1)
//			{
//				if (arr[tmp3.pos][tmp3.clip] == 0)
//				{
//					q.push(tmp3);
//					arr[tmp3.pos][tmp3.clip] = 1;
//				}
//			}
//		}
//
//		else if (q.front().pos == n)
//		{
//			cout << q.front().time;
//			break;
//		}
//	}
//}