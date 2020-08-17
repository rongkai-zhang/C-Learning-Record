#include <iostream>
using namespace std;

void mySwap01(int a, int b) //值传递
{
    int t = a;
    a = b;
    b = t;
    // cout << "mySwap01中 a = " << a << endl;
    // cout << "mySwap01中 b = " << b << endl;
}

void mySwap02(int *a, int *b) // 地址传递
{
    int t = *a;
    *a = *b;
    *b = t;
    cout << "mySwap02中 a = " << a << endl;
    cout << "mySwap02中 b = " << b << endl;
}

void mySwap03(int &a, int &b)  // 引用传递
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    //引用做函数的参数
    // 作用：函数传参时，可以利用引用的技术让形参修饰实参
    // 优点 ：可以简化指针修改实参

    int a = 10;
    int b = 20;
    //  mySwap01(a, b); //值传递 形参不会修饰实参
    //  mySwap02(&a, &b);  //地址传递，形参会修饰实参
    mySwap03(a, b); //引用传递 形参也会修饰实参

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}