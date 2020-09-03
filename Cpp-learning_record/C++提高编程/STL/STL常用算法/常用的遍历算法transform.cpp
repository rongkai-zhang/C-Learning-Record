#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
//transform  搬运容器到另一个容器当中
//transform(源容器起始迭代器，源容器结束迭代器，新容器起始迭代器，仿函数或回调函数) 最后一个函数可以在搬运过程中对数据进行运算

class Transform
{
public:
    int operator()(int v)
    {
        return v+100;
    }
};

class Myprint
{
public:
    void operator()(int val)
    {   
        cout<<val<<"  ";

    }

};

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    vector<int> vTarget;
    vTarget.resize(v.size());//目标容器必须要提前开辟空间

    transform(v.begin(), v.end(), vTarget.begin(),Transform() );

    for_each(vTarget.begin(),vTarget.end(),Myprint());
    cout<<endl;
}

int main()
{
    test01();
    return 0;
}