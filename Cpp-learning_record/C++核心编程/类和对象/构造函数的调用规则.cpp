#include <iostream>
using namespace std;

//���캯���ĵ��ù���
//1.����һ���࣬C++���������ÿ���඼�������3������
//Ĭ�Ϲ���  ����ʵ�֣�
//��������   ����ʵ�֣�
//��������    ��ֵ������


//2.�������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ�������졣
//�������д�Ŀ������캯�����������Ͳ����ṩ������ͨ���캯����
class Person
{
public:
    Person()
    {
        cout << "Person��Ĭ�Ϲ��캯������" << endl;
    }

    Person(int Age)
    {
        m_Age = Age;
        cout << "Person���вι��캯������" << endl;
    }

    Person(const Person &p)
    {
        m_Age = p.m_Age;
        cout << "Person�Ŀ������캯���ĵ���" << endl;
    }

    ~Person()
    {
        cout << "Person��������������" << endl;
    }

    int m_Age;
};

// void test01()
// {
//     Person p;
//     p.m_Age = 18;

//     Person p2(p);
//     cout << "p2������Ϊ��" << p2.m_Age << endl;
// }

void test02()
{
    Person p;
    Person p2(p);
    cout << "p2������Ϊ��" << p2.m_Age << endl;
}   

int main()
{
    // test01();
    test02();

    return 0;
}