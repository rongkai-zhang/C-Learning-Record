#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

//adjacent_find 用来查找相邻重复的元素  adjacent-find(begin(),end())
//如果查到了会返回相邻元素的第一个迭代器，没有查找返回end()


void test01()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);

    vector<int>::iterator it = adjacent_find(v.begin(),v.end());

    if(it == v.end())
    {
        cout<<"没找到"<<endl;
    }
    else 
    {
        cout<<"找到了相邻重复元素："<<*it<<endl;
    }
    


}



int main()
{
    test01();

    return 0;
}