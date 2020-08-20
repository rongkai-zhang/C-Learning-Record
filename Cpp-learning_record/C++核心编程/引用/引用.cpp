#include <iostream>
using namespace std;
int main()
{
    //  引用就是给变量起别名  基本语法：
    // 数据类型  &别名 = 原名  ； 然后原名别名就都可以访问那块内存了

    //注意事项
    //1.引用必须初始化
    //2. 引用在初始化后不能改变

    int a = 10;
    int &b = a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}