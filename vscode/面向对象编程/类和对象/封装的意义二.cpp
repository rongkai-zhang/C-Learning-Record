#include <iostream>
using namespace std;
//����Ȩ��
//����
//����Ȩ�� public     ��Ա ���ڿ��Է��� ������Է���
//����Ȩ�� protected  ��Ա ���ڿ��Է��� ���ⲻ���Է���  ����Ҳ���Է��ʸ����еı�������
//˽��Ȩ�� private    ��Ա ���ڿ��Է��� ���ⲻ���Է���  ���Ӳ����Է��ʸ��׵�˽������

class Person
{

public:
    //����Ȩ��
    string m_Name; //����

protected:
    //����Ȩ��
    string m_Car ; //����

private:
    //˽��Ȩ��
    int m_Password; //���п�����
public:
    void func()
    {
        m_Name = "����";
        m_Car = "������";
        m_Password = 123456;
    }
};
int main()
{
    Person p1; //ʵ��������Ķ���

    p1.m_Name = "����";
    
    // p1.m_Car = "����";  //����Ȩ������  ��������ʲ���
    // p1.m_Password = 123; //˽��ȥȨ������  ������ʲ���
    p1.func();
    return 0;
}