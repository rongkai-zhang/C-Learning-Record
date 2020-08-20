#include <iostream>
using namespace std;

//多态

//动物类
class Animal
{ 
public:
    //加上virtual    虚函数
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};

class Cat : public Animal
{
public:
    //重写 函数返回值类型  函数名称 参数列表  都完全相同 （virtual关键字可写可不写）
    void speak()
    {
        cout << "小猫在说话" << endl;
    }
};

//狗类
class Dog : public Animal
{
    void speak()
    {
        cout << "小狗在说话" << endl;
    }
};

//执行说话的函数
//地址早绑定 在编译阶段确定函数地址
//如果想执行让猫说话，至二个函数的地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定

//动态多肽满足条件
//1. 有继承关系
//2. 子类要重写父类的虚函数

//动态多肽使用
//父类的指针或者引用 执向子类对象

void doSpeak(Animal &animal) //Animal &animal = cat;
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

int main()
{
    test01();

    return 0;
}

// 多态分两类
//     ·静态多态：函数重载 和 运算符重载属于静态多肽，复用函数名
//     ·动态多态：派生类和虚函数实现运行时多肽
// 静态多态和动态多态区别
//     ·静态多肽的函数地址早绑定 - 编译阶段确定函数地址
//     ·动态多肽的杉树地址晚绑定 - 运行阶段确定函数地址