#include <iostream>
using namespace std;

void showValue(const int &val)  //如果这是一个只打印的函数，就可能会有改变参数的误操作
{
    //val = 1000;
    cout << "val = " << val << endl;
}
int main()
{
    //常量引用
    //修饰形参来防止误操作

    //int a = 10;
    //int &ref = 10; //报错的  引用必须引一块合法的内存空间
    //加上const之后编译器将代码修改为 int t = 10；const int &ref = t； 引用了临时的空间
    // const int &ref = 10;//不报错
    // ref = 20;//加入const  之后变为只读，不能修改
    int a = 100;
    showValue(a);
    cout << "a = " << a << endl;

    return 0;
}