#include <iostream>
using namespace std;
#include <functional> //内建的函数对象头文件
/*
plus<T>         加法仿函数
minus<T>        减法仿函数    
multiplies<T>   乘法仿函数
divides<T>      除法仿函数
modulus<T>      取模仿函数
negate<T>       取反仿函数
*/

//内建的函数对象   算术仿函数

//negate - 一元仿函数  取反仿函数

void test01()
{
    negate<int> n;

    cout << n(50) << endl;
}

//plus 二元仿函数  加法
void test02()
{
    plus<int> p;

    cout << p(10, 240) << endl; //括号里面写上左操作数和右操作数
}

int main()
{
    test01();

    test02();
    return 0;
}