//#include <iostream>
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//typedef struct Move
//{
//    int num;
//    string asdf;
//}_move;
//
//void change(int* dx, int* dy, string str)
//{
//    if (*dx == 0 && *dy == 0 && str == "right") // x 증가시
//    {
//        *dx = 1; *dy = 1; // y감소
//    }
//    else if (*dx == 0 && *dy == 0 && str == "left")
//    {
//        *dx = 0; *dy = 1; // y 증가
//    }
//
//    else if (*dx == 0 && *dy == 1 && str == "right") // y 증가시
//    {
//        *dx = 0; *dy = 0; // x증가
//    }
//    else if (*dx == 0 && *dy == 1 && str == "left")
//    {
//        *dx = 1; *dy = 0; // x 감소
//    }
//
//    else if (*dx == 1 && *dy == 0 && str == "right") // x 감소시
//    {
//        *dx = 0; *dy = 1; // y 증가
//    }
//    else if (*dx == 1 && *dy == 0 && str == "left")
//    {
//        *dx = 1; *dy = 1; // y 감소
//    }
//
//    else if (*dx == 1 && *dy == 1 && str == "right") // y 감소시
//    {
//        *dx = 1; *dy = 0; // x 감소
//    }
//    else if (*dx == 1 && *dy == 1 && str == "left")
//    {
//        *dx = 0; *dy = 0; // x 증가
//    }
//}
//
//void increase(int dx, int dy, int* x, int* y, int num)
//{
//    if (dx == 0 && dy == 0)
//    {
//        *x = *x + num;
//    }
//    else if (dx == 0 && dy == 1)
//    {
//        *y = *y + num;
//    }
//    else if (dx == 1 && dy == 0)
//    {
//        *x = *x - num;
//    }
//    else if (dx == 1 && dy == 1)
//    {
//        *y = *y - num;
//    }
//}
//
//int main()
//{
//    int num, time;
//    cin >> num >> time;
//    int x, y;
//    int dx = 0;
//    int dy = 0; // 0 0 x 증가, 0 1 y 증가, 1 0 x 감소, 11 y 감소
//    x = 0; y = 0;
//    int sum = 0;
//    vector<_move> mv;
//    for (int i = 0; i < num; i++)
//    {
//        _move tmp;
//        cin >> tmp.num >> tmp.asdf;
//        int qwer = tmp.num;
//        tmp.num = tmp.num - sum;
//        mv.push_back(tmp);
//        sum = qwer;
//
//    }
//
//    if (!mv.empty())
//    {
//        for (int i = 0; i < mv.size(); i++)
//        {
//            increase(dx, dy, &x, &y, mv[i].num);
//            change(&dx, &dy, mv[i].asdf);
//            time -= mv[i].num;
//        }
//    }
//    if (time != 0)
//    {
//        increase(dx, dy, &x, &y, time);
//    }
//    //for (int i = 0; i < mv.size(); i++)
//    //{
//    //    cout << mv[i].num << mv[i].asdf << endl;
//    //}
//    cout << x << " " << y << endl;
//
//}