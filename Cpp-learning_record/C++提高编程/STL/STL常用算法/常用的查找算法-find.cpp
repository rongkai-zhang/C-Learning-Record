#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>


//find(起始迭代器，结束迭代器，要查找的元素)  找到返回迭代器  找不到返回end()

//查找内置的数据类型
void test01()
{
    vector<int>v;
    for(int i = 0;i<10;i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it = find(v.begin(),v.end(),5);
    if(it == v.end())
    {
        cout<<"没有找到"<<endl;
    }
    else 
    {
        cout<<"找到了："<<*it<<endl;
    }

}

class Person
{
public:
    Person(string name,int age)
    {
        this->m_age = age;
        this->m_name = name;

    }

    bool operator==(const Person p)
    {   
        if(this->m_age == p.m_age && this->m_name == p.m_name)
        {
            return true;
        }
        else 
        {
            return false;
        }

    }

    string m_name;
    int m_age;


};


void test02()
{
    vector<Person> v;
    Person p1("张三",10);
    Person p2("李四",20);
    Person p3("王五",30);
    Person p4("赵六",40);

    Person pp("赵六",40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    vector<Person>:: iterator it = find(v.begin(),v.end(),pp);
    if(it == v.end())
    {
        cout<<"没找到"<<endl;
    }
    else 
    {
        cout<<"找到了  姓名："<<it->m_name<<"  年龄："<<it->m_age<<endl;
    }


}

int main()
{
    test01();
    test02();
    return 0;
}

/*
find                查找元素
find_if             按照条件查找
adjacent_find       查找相邻重复元素
binary_find         二分查找  找到返回真 没找返回假
count               统计元素个数
count_if            按条件统计元素个数  例如大于五的多少个
*/