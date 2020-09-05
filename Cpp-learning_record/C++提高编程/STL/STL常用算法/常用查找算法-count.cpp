#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//count 统计元素个数  统计元素出现个数
// count(iterator begin(),iterator()end(),value)

//1.内置的数据类型
void test01()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);

    int num = count(v.begin(), v.end(), 1);

    cout << "1的元素个数为：" << num << endl;
}

//2.自定义的数据类型
class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    bool operator==(const Person &p) //底层记得要加上const
    {
        if (this->m_Age == p.m_Age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string m_Name;
    string m_Age;
};

void test02()
{
    vector<Person> v;

    Person p1("刘备", 35);
    Person p2("关羽", 35);
    Person p3("张飞", 35);
    Person p4("赵云", 30);
    Person p5("曹操", 40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    Person p("诸葛亮", 35);

    int num = count(v.begin(), v.end(), p);

    cout << "和诸葛亮同岁数的人员个数为：" << num << endl;
}

int main()
{
    test01();

    test02();

    return 0;
}