#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int *p = &a;
    //或者  int *p;；
    //     p = &a;
    cout << "a的地址为" << &a << endl;
    cout << "指针p为  " << p << endl;
    // 指针前加* 代表解引用，找到指针指向的内存中的数据
    // *p 即指的是内存中的数据1，可通过*p来修改数值
    *p = 1000;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    // 指针所占的空间  32位操作系统指针都占4个字节  64位占8字节
    cout << "sizeof(int *) = " << sizeof(*p) << endl;
    cout << "sizeof(float *) = " << sizeof(float *) << endl;
    cout << "sizeof(char *) = " << sizeof(char *) << endl;
    

    return 0;
}