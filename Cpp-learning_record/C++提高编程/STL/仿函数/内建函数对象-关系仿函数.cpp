#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include<functional>
//内建函数对象-关系仿函数
/*
equal_to<T>          等于
not_equal_to<T>      不等于
greater<T>           大于
greater_equal<T>     大于等于
less<T>              小于
less_equal<T>        小于等于
*/
//大于 greater  相对常用

class MyCompare
{
public:
    bool operator()(int v1, int v2)
    {
        return v1 > v2;
    }
};

void test01()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(8);
    v.push_back(15);
    v.push_back(4);
    v.push_back(9);

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;

    //降序  sort默认排序是升序
    // sort(v.begin(), v.end(), MyCompare());
    //greater<int>()  内建的函数对象
    sort(v.begin(), v.end(),greater<int>());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
}

int main()
{

    test01();

    return 0;
}