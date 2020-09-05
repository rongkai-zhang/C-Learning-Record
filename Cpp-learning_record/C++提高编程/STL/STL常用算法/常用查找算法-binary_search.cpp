#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//binary_search 查找指定元素是否存在  binary_search(iterator begin(),iterator end(),value)
//返回bool类型 查到返回true  否则返回false
//注意：虽然查找效率很高  但在无序的序列不可用

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {

        v.push_back(i);
    }
    //v.push_back(2);    如果是无序序列结果未知
    //查找容器中是否有9

    bool ret =  binary_search(v.begin(),v.end(),9);
    if(ret)
    {
        cout<<"找到了元素"<<endl;
    }
    else
    {
        cout<<"未找到"<<endl;
    }

}

int main()
{
    test01();

    return 0;
}