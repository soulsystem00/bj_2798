//#include <iostream>
//using namespace std;
//
//int solution(string word)
//{
//	int answer = 0;
//
//	int arr[5][5];
//	int inc = 1;
//	for (int i = 0; i < 5; i++)
//	{
//		int pushnum = 1;
//		for (int j = 0; j < 5; j++)
//		{
//			arr[i][j] = pushnum;
//			pushnum += inc;
//		}
//		inc = (inc * 5) + 1;
//	}
//
//	for (int i = 0; i < word.length(); i++)
//	{
//		if (word[i] == 'A')
//			answer += arr[4 - i][0];
//		if (word[i] == 'E')
//			answer += arr[4 - i][1];
//		if (word[i] == 'I')
//			answer += arr[4 - i][2];
//		if (word[i] == 'O')
//			answer += arr[4 - i][3];
//		if (word[i] == 'U')
//			answer += arr[4 - i][4];
//	}
//
//	return answer;
//}
//
//int main()
//{
//	cout << solution("EIO");
//}