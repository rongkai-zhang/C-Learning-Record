#include <iostream>
using namespace std;

//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

class Student
{

public: //����Ȩ��
    //���е����Ժ���Ϊ  ����ͳһ��Ϊ��Ա
    //����   Ҳ�г�Ա���� ��Ա����
    // ��Ϊ  Ҳ�г�Ա����  ��Ա����
    //����
    string m_Name; //����
    int m_Id;      //ѧ��

    //��Ϊ
    //��ʾ������ѧ��
    void show()
    {

        cout << "������" << m_Name << endl;
        cout << "ѧ�ţ�" << m_Id << endl;
    }

    //��������ֵ
    void setName(string name)
    {
        m_Name = name;
    }
    // ��ѧ�Ÿ�ֵ
    void setId(int id)
    {
        m_Id = id;
    }
};

int main()
{
    //����һ�������ѧ��   ʵ��������
    Student s1;
    //��s1����������Ը�ֵ����
    //s1.m_Name = "����";
    s1.setName("����");

    //s1.m_Id = 948587;
    s1.setId(948587520);
    s1.show();

    Student s2;
    s2.m_Name = "����";
    s2.m_Id = 326;
    s2.show();

    return 0;
}