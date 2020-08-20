#include <iostream>
using namespace std;
int *func()
{
    //在堆区创建整形数据
    //new 返回的是  该数据类型的指针
    int *p = new int(10);

    return p;
}
void test01()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    //堆区的数据 由程序员管理开辟，程序员管理释放
    //如果想释放堆区的 数据，利用关键字  delete
    delete p;
    cout << *p << endl;
}
// 在堆区用new  开辟数组
void test02()
{
    //创建10个整形数据的数组，在堆区
    int *arr = new int[10];//用中括号告诉它数组的长度
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1; //给数组赋值  1到10
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "  ";
    }
    delete [] arr; //释放数组的时候要加上中括号才可以
}

int main()
{
    test01();
    test02();



    return 0;
}