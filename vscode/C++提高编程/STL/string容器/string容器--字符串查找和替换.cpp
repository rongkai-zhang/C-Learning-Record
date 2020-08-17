#include <iostream>
using namespace std;

//字符串的查找和替换

//1.查找

void test01()
{
    string str1 = "ABCDEFGDE";

    int pos = str1.find("DE"); //返回值是int  找到了返回第几个（从0开始数），找不到返回-1

    if (pos == -1)
    {
        cout << "未找到字符串" << endl;
    }
    else
    {
        cout << "找到字符串，pos = " << pos << endl;
    }

    //rfind 和find的区别
    //rfind是从右往左查找（下标依然是从左往右计算的） find从左往右查找   
    pos = str1.rfind("DE");

    cout<<"pos = "<<pos<<endl;
}

//2.替换
void test02()
{
    string str1 = "ABCDEFG";
    str1.replace(1,3,"1111");//从1号位置起  三个字符 替换为“1111”
    cout<<"str1 = "<<str1<<endl;


}

int main()
{
   // test01();
    test02();
    return 0;
}