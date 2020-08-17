#include <iostream>
using namespace std;

void func(int &ref)
{
    ref = 100;
}
int main()
{
    // 引用的本质在c++内部实际是一个 指针常量  指针的指向不能变
    int a = 10;

    int &ref = a; //自动转换为  int * const ref = &a;
    ref = 20;     // 内部发现ref是引用 ，自动帮我们转换成 *ref = 20；

    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;

    func(a);
    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;

    return 0;
}