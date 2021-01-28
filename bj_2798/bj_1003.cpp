//#include <iostream>
//
//using namespace std;
//
//int fibonacci1(int n) {
//    if (n == 0) {
//        //printf("0");
//        return 1;
//    }
//    else if (n == 1) {
//        //printf("1");
//        return 0;
//    }
//    else {
//        return fibonacci1(n - 1) + fibonacci1(n - 2);
//    }
//}
//
//int fibonacci2(int n) {
//    if (n == 0) {
//        //printf("0");
//        return 0;
//    }
//    else if (n == 1) {
//        //printf("1");
//        return 1;
//    }
//    else {
//        return fibonacci2(n - 1) + fibonacci2(n - 2);
//    }
//}
//
//int main()
//{
//    int N;
//    cin >> N;
//    int arr[41];
//    arr[0] = 0;
//    arr[1] = 1;
//    for (int i = 2; i <= 40; i++)
//    {
//        arr[i] = arr[i - 2] + arr[i - 1];
//    }
//    for (int i = 0; i < N; i++)
//    {
//        int tmp;
//        cin >> tmp;
//        if (tmp == 0)
//        {
//            cout << "1 0\n";
//        }
//        else
//        {
//            cout << arr[tmp - 1] << " " << arr[tmp] << endl;
//        }
//    }
//    
//}