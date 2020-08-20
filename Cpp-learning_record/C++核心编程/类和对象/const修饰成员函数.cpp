#include <iostream>
using namespace std;

//常函数

//常对象

class Person
{
public:
    //this指针的本质 是指针常量  指针的指向是不可以修改的
    //cost Person * const this；

    Person()
    {
    }
    void showPerson() const
    {
        this->m_B = 10;
        //this->m_A = 100;
        // this = NULL;//this指针不可以修改指针的指向的
    }

    void func()
    {
        m_A = 100;
    }

    int m_A;
    mutable int m_B; //特殊变量，即使在常函数中，也可以修改这个值 加上关键字mutable
};

void test01()
{
    Person p;
    p.showPerson();
}

//常对象

void test02()
{
    const Person p; //在对象前加 const  变为常对象
    // p.m_A = 100;
    p.m_B = 100; //m_B是特殊值，在常对象下也可以修改

    //常对象只能调用常函数
    p.showPerson();
    // p.func(); //常对象不可以调用普通成员函数，因为普通成员函数可以修改属性
}
int main()
{

    return 0;
}