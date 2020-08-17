#include <iostream>
using namespace std;

//字符串的插入和删除

void test01()
{
    string str = "hello";

    //插入
    str.insert(1, "111"); //从那个位置  插入什么东西
    //h111ello
    cout << "str = " << str << endl;

    //删除
    str.erase(1, 3);//从哪个位置  删除几个字符
    cout << "str = " << str << endl;
}

int main()
{
    test01();

    return 0;
}