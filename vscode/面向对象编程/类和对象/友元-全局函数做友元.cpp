#include <iostream>
using namespace std;

class Buliding
{
    // goodGay全局函数是 Building好朋友 可以访问Building中私有成员
    friend void goodGay(Buliding &buliding);

public:
    Buliding()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
    string m_SittingRoom; //客厅

private:
    string m_BedRoom; //卧室
};

//全局函数
void goodGay(Buliding &buliding)
{
    cout << "好基友的全局函数 正在访问：" << buliding.m_SittingRoom << endl;

    cout << "好基友的全局函数 正在访问：" << buliding.m_BedRoom << endl;
}

void test01()
{
    Buliding buliding;
    goodGay(buliding);
}

int main()
{

    test01();

    return 0;
}