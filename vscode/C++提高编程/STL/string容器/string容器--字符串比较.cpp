#include <iostream>
using namespace std;

//字符串比较   实用是一般是比较两个字符串是否相等
//按字符的ASCLL码进行对比
// =返回0  >返回1   <返回-1  

void test01()
{
    string str1 = "aello";
    string str2 = "hello";

    if(str1.compare(str2) == 0)
    {
        cout<<"str1 等于 str2"<<endl;
    }
    else if(str1.compare(str2) >0 )
    {
        cout<<"str1 大于 str2"<<endl;
    }
    else 
    {
        cout<<"str1 小于 str2"<<endl;
    }

}

int main()
{
    test01();

    return 0;
}