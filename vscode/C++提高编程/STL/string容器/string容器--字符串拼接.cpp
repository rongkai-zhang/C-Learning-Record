#include <iostream>
using namespace std;

//string字符串拼接
/*
函数原型
-string& operator+=(const char* str);                   //重载+=操作符
-string& operator+=(const char c);                      //重载+=操作符
-string& operator+=(const string& str);                 //重载+=操作符
-string& append(const char *s);                         //把字符串s连接到当前字符串尾
-string& append(const char *s,int n)                    //把字符串s前n个字符连南街道当前字符串结尾
-string& append(const string &s);                       //同operator+=(const string& str)
-string& append(const string &s,int pos,int n);         //字符串s中从pos开始的n个字符链接到字符串尾
*/

void test01()
{
    string str1 = "俺";

    str1 += "也一样";
    cout<<"str1 = "<<str1<<endl;

    str1+='!';

    cout<<"str1 = "<<str1<<endl;

    string str2 = "ABC DEF";

    str1 += str2;
    cout<<"str1 = "<<str1<<endl;

    string str3 = "I";
    str3.append(" love ");
    cout<<"str3 = "<<str3<<endl;

    str3.append("game abcde",4);
    cout<<"str3 = "<<str3<<endl;

    //str3.append(str2);
    str3.append(str2, 3, 4); //参数2是从哪截取  参数3是截取的个数
    cout<<"str3 = "<<str3<<endl;





}

int main()
{

    test01();

    return 0;
}