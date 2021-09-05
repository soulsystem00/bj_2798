//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    long long n;
//    cin >> n;
//
//    long long* arr = new long long[n];
//
//    arr[0] = 1;
//    arr[1] = 3;
//    
//    for (int i = 2; i < n; i++)
//    {
//        arr[i] = (arr[i - 1] + 2*arr[i - 2]) % 10007;
//    }
//
//    cout << arr[n-1];
//}