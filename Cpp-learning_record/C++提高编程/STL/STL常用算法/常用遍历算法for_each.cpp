#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
//算法的常用头文件<algorithm> <functional>  <numeric>
//<algorithm> 是所有STL头文件中最大的一个，设计 比较、交换、查找、遍历操作、复制、修改等等
//<numeric>体积很小，只包含了几个在序列上进行简单数学运算的模板函数
//<functional>定义了一些模板类用以声明函数对象

//for_each(起始迭代器，结束迭代器，一个函数或者仿函数)  遍历容器
//transform  搬运容器到另一个容器当中

//常用遍历算法for_each

//普通函数
void print01(int val)
{
    cout << val << " ";
}

//仿函数
class print02
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    for_each(v.begin(), v.end(), print01);
    cout << endl;
    for_each(v.begin(), v.end(), print02()); //仿函数要加上一个小括号
    cout << endl;
}

int main()
{
    test01();
    return 0;
}