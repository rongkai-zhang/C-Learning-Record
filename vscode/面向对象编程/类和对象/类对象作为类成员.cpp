#include <iostream>
using namespace std;
#include <string>

//�������Ϊ���Ա

//�ֻ���
class Phone
{
public:

    Phone(string pName)
    {
        cout <<"Phone ���캯������"<<endl;
        m_PName = pName;
    }

    ~Phone()
    {
        cout <<"Phone��������������"<<endl;
    }
    //�ֻ�Ʒ�Ƶ�����
    string m_PName;


};
//����
class Person
{
public:

    Person(string name,string pName):m_Name(name),m_Phong(pName)
    {
        cout<<"Person�Ĺ��캯������"<<endl;
    }

    ~Person()
    {
        cout<<"Person���������ĵ���"<<endl;
    }
    //����
    string m_Name;
    //�ֻ�
    Phone m_Phong;


};

// �������������Ϊ�����Ա������ʱ���ȹ���������ٹ��������ȹ���Phone��Person��
// ������˳���빹���෴ ��������Person������Phone��
void test01()
{
    Person p("����","ƻ��MAX");

    cout <<p.m_Name<<"���ţ�"<<p.m_Phong.m_PName<<endl;
}
int main()
{

    test01();

    return 0;
}