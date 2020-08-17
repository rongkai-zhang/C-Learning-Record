#include <iostream>
using namespace std;

//函数模板的注意事项
template <class T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

//1.自动类型推导必须要推导出一致的数据类型T才可以使用
void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c';

    mySwap(a, b);//正确
    //mySwap(a,c); //错误 推导不出一致的T类型

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//2.模板必须要确定出T的数据类型，才可以使用
template<class T>
void func()
{
    cout<<"func函数的调用"<<endl;
}

void test02()
{
    func<int>();
}


int main()
{
    test01();
    test02();
    return 0;
}

//使用模板必须确定出通用的数据类型T，并且能推导出一致的类型