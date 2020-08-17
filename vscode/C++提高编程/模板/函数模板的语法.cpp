#include <iostream>
using namespace std;

//函数模板    目的是为了提高复用性，将类型参数化

//交换两个整形交换函数
void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//交换两个浮点型的函数
void swapDouble(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

//函数模板
template <typename T> //声明一个模板  告诉编译器后面代码中紧跟着的T不要报错 T是一个通用的数据类型
//template  --声明创建模板
//tempname  --表示后面的符号是一种数据类型 ，可用class代替
//T ---- 通用的数据类型，名称可以替换，通常为大写字母

void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // swapInt(a, b);
    //利用函数模板来进行交换
    //两种方式使用函数模板
    //1.自动类型推导
    //mySwap(a,b);

    //2.显示指定类型
    mySwap<int>(a, b);

    cout << "交换后：" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << endl;

    //     double c = 1.1;
    //     double d = 2.2;
    //     cout << "c = " << c << endl;
    //     cout << "d = " << d << endl;
    //     cout << "交换后：" << endl;
    //     swapDouble(c, d);

    //     cout << "c = " << c << endl;
    //     cout << "d = " << d << endl;
}
int main()
{
    test01();

    return 0;
}