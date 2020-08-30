#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//二元谓词
class MyCompare
{
public:
    bool operator()(int val1, int val2) //两个参数  就称为二元谓词
    {
        return val1 > val2;
    }
};

void test01()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);
    v.push_back(4);
    v.push_back(3);

    sort(v.begin(), v.end());
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //使用函数对象来改变算法策略，变为排序规则为从打到小
    sort(v.begin(), v.end(), MyCompare()); //sort的重载版本   begin end 和一个谓词
    cout << "-----------------" << endl;
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl; 
}

int main()
{

    test01();

    return 0;
}