#include <iostream>
using namespace std;
int main()
{
    //指针和数组
    //利用指针访问数组中的元素
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "第一个元素为：" << a[0] << endl;

    int *p = a; //创建指针指向数组

    cout << "用指针来访问第一个元素为：" << *p << endl;

    p++;

    cout <<"利用指针访问第二个元素"<<*p<<endl;
    //通过指针访问所有数据
    cout <<"利用指针遍历数组:"<<endl;
    int *p2 = a;
    for(int i = 0;i<10 ;i++)
    {
        cout <<*p2<<"  ";
        p2++;

    }

    return 0;
}