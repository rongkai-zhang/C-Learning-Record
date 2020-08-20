#include <iostream>
using namespace std;
#include <string>

//类对象作为类成员

//手机类
class Phone
{
public:

    Phone(string pName)
    {
        cout <<"Phone 构造函数调用"<<endl;
        m_PName = pName;
    }

    ~Phone()
    {
        cout <<"Phone的析构函数调用"<<endl;
    }
    //手机品牌的名称
    string m_PName;


};
//人类
class Person
{
public:

    Person(string name,string pName):m_Name(name),m_Phong(pName)
    {
        cout<<"Person的构造函数调用"<<endl;
    }

    ~Person()
    {
        cout<<"Person析构函数的调用"<<endl;
    }
    //姓名
    string m_Name;
    //手机
    Phone m_Phong;


};

// 当其它类对象作为本类成员，构造时候先构造类对象，再构造自身（先构造Phone再Person）
// 析构的顺序与构造相反 （先析构Person再析构Phone）
void test01()
{
    Person p("张三","苹果MAX");

    cout <<p.m_Name<<"拿着："<<p.m_Phong.m_PName<<endl;
}
int main()
{

    test01();

    return 0;
}