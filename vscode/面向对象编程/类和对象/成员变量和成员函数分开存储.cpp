#include <iostream>
using namespace std;

//成员变量 和 成员函数 分开存储的

class Person
{

    int m_A;//非静态成员变量  属于类的对象上的
    
    static int m_B;//静态成员变量  不属于类的对象上

    void func()  //非静态成员函数 不属于类的对象上
    {

    }
    static void func2()//静态成员函数 不属于类的对象上
    {

    }

};

int Person::m_B = 0;
void test01()
{
    Person p;
    //空对象占用的内存空间为：1
    //C++编译器会给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置（比如说俩空对象）
    //乜咯空对象也应该有个独一无二的内存地址
    cout <<"size of p = "<<sizeof(p)<<endl;
}

void test02()
{ 
    Person p;

    cout <<"size of p = "<<sizeof(p)<<endl;

}

int main()
{

    // test01();
    test02();
    return 0;
}