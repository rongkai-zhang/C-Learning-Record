#include <iostream>
using namespace std;

int *func()
{
    //利用new关键字可以将数据开辟到堆区
    //指针本质也是局部变量  也是放在栈上，指针保存的数据放在的堆区
    int *p = new int(10);
    return p;
}
int main()
{
    //在堆区开辟数据
    int *p = func();

    cout << *p << endl;
    cout << *p << endl;

    return 0;
}