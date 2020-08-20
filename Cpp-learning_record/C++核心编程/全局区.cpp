#include <iostream>
using namespace std;
//全局变量
int g_a = 10;
int g_b = 10;
//const 修饰的全局变量 ，全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
    //创建普通局部变量
    int a = 10;
    int b = 10;
    cout << "局部变量 a 的地址为：  " << (int)&a << endl;
    cout << "局部变量 b 的地址为：  " << (int)&b << endl; // 6422开头

    cout << "全局变量 g_a 的地址为：" << (int)&g_a << endl; // 4214开头
    cout << "全局变量 g_b 的地址为：" << (int)&g_b << endl;

    //静态变量 在普通变量前面加static，属于静态变量
    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量s_a 的地址为：" << (int)&s_a << endl; //4214开头
    cout << "静态变量s_b 的地址为：" << (int)&s_b << endl;

    //常量
    //字符串常量  （双引号引起来的都叫字符串常量）
    cout << "字符串常量的地址为： " << (int)&"hello word" << endl; //4219开头

    //const修饰的变量
    //分为const修饰的全局变量 const修饰的局部变量
    cout << "全局常量 c_g_a 的地址为:" << (int)&c_g_a << endl; //4218开头
    cout << "全局常量 c_g_b 的地址为:" << (int)&c_g_b << endl;

    const int c_l_a = 10; //cost修饰的局部变量
    const int c_l_b = 10;
    cout << "局部常量 c_l_a 的地址为：" << (int)&c_l_a << endl;//6422开头    
    cout << "局部常量 c_l_b 的地址为：" << (int)&c_l_b << endl;
    return 0;
}