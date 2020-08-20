#include <iostream>
using namespace std;
//函数默认参数

//如果我们传入了数据就用我们传入的数据，如果我们没传数据，就用默认值
//  语法：  返回值类型 函数名（形参 = 默认值）{}
int func(int a , int b , int c = 30)
{
    return a + b + c;
}


//  注意事项
//1. 如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
// int func2(int a, int b = 10,int c  )//报错的
// {
//     return a+b+c;
// }

//2. 如果函数声明已经有了默认参数，函数实现就不能有默认参数
// 声明 和实现只能有一个有默认参数
int func2(int a ,int b );

int func2(int a = 10, int b = 10)
{
    return a+b;
}

int main()
{
    cout << func(10 ,30) << endl;
    cout <<func2()<<endl;

    return 0;
}