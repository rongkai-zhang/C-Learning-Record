#include <iostream>
using namespace std;
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "整个数组所占的内存空间为:" << sizeof(a) << endl;
    cout << "每个元素所占的内存空间为:" << sizeof(a[0]) << endl;
    cout << "数组的元素个数为:" << sizeof(a) / sizeof(a[0]) << endl;
    cout << "数组的首地址为 " << (int)a << endl; //默认地址输出的是16进制 用（int）进行强制类型转换
    cout << "数组中第一个元素的地址为" << (int)&a[0] << endl;
    cout << "数组中第二个元素的地址为" << (int)&a[1] << endl;
    return 0;
}