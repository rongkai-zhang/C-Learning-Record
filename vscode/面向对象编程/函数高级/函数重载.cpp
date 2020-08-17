#include <iostream>
using namespace std;

//函数重（chong）载   作用：函数名可以相同，提高复用性
//可以让函数名相同，提高复用性

//函数重载的满足条件
//1. 在同一个作用域下
//2. 函数名称相同
//3.函数参数类型不同 或者 个数不同 或者 顺序不同
void func()
{
    cout << "func 的调用" << endl;
}

void func(int a)
{
    cout << "func (int a) 的调用" << endl;
}

void func(double a)
{
    cout << "func (double a) 的调用" << endl;
}

void func(int a,double b)
{
    cout << "func (int a,double b) 的调用" << endl;
}

void func(double a,int b)
{
    cout << "func (double a,int b) 的调用" << endl;
}
//注意事项
//函数的返回值不可以作为函数的重载条件
//int func();报错 无法重载仅按返回类型区分的函数


int main()
{
    // func();
    // func(10);
    // func(3.14);
    func(10,3.14);
 
    return 0;
}