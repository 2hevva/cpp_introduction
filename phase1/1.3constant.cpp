//
// Created by Teacher on 24-4-12.
//
//作用：用于记录程序中不可更改的数据
//
//        C++定义常量两种方式
//
//#define 宏常量： #define 常量名 常量值
//
//==通常在文件上方定义==，表示一个常量
//        const修饰的变量 const 数据类型 常量名 = 常量值
//
//==通常在变量定义前加关键字const==，修饰该变量为常量，不可修改

//1、宏常量
#define day 7
#include<iostream>
using namespace std;

int main() {

    cout << "一周里总共有" << day << "天" << endl;
    //day = 8;  //报错，宏常量不可以修改

    //2、const修饰变量
    const int month = 12;
    cout << "一年里总共有" << month << "个月份" << endl;
//    month = 24; //报错，常量是不可以修改的


    system("pause");

    return 0;
}