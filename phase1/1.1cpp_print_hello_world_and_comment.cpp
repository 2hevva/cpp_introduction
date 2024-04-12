/*
// Created by Teacher on 24-4-12. 这是多行注释
*/
//iostream 顾名思义就是io的流对象库
#include<iostream>
//使用namespace可以让库中的对象被直接访问而省略std::前缀，不然每次都需要std::
using namespace std;

//与c语言相同，程序从main函数开始执行，应该被正确返回0
int main() {
    //cout对象是iostream标准输入输出库中std包中的一个对象，使用cout可以标准化打印输出字符到控制台
    //也包括一些数字可以直接被format为字符串而输出，endl为换行
    cout << "Hello world" << endl;

    //系统暂停而等待用户按任意键继续
    system("pause");

    return 0;
}

//这是单行注释
//作用：在代码中加一些说明和解释，方便自己或其他程序员程序员阅读代码