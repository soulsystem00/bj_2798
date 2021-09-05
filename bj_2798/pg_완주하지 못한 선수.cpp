//#include <iostream>
//#include <map>
//#include <string>
//#include <vector>
//using namespace std;
//
//string solution2(vector<string> participant, vector<string> completion) {
//	vector<string> result;
//	for (int i = 0; i < participant.size(); i++)
//	{
//		bool check = true;
//		for (int j = 0; j < completion.size(); j++)
//		{
//			if (participant[i] == completion[j])
//			{
//				check = false;
//				completion.erase(completion.begin() + j);
//				break;
//			}
//		}
//
//		if (check)
//		{
//			result.push_back(participant[i]);
//		}
//
//	}
//
//
//	return result[0];
//}
//
//string solution(vector<string> participant, vector<string> completion)
//{
//	map<string, int> m;
//	map<string, int> m2;
//
//	string v;
//	for (auto tmp : participant)
//	{
//		m[tmp]++;
//	}
//	for (auto tmp : completion)
//	{
//		m2[tmp]++;
//	}
//	for (auto tmp : participant)
//	{
//		if (m[tmp] == 0)
//		{
//			v = tmp;
//		}
//		else if (m[tmp] != m2[tmp])
//		{
//			v = tmp;
//		}
//	}
//
//	return v;
//
//}
//int main()
//{
//	vector<string> participant = { "mislav", "stanko", "mislav", "ana" };
//	vector<string> completion = { "stanko", "ana", "mislav" };
//	cout << solution(participant, completion);
//}