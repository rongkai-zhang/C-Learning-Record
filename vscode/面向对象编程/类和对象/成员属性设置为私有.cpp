#include <iostream>
using namespace std;
#include <string>
//��Ա��������Ϊ˽��
//1. �����Լ����ƶ�дȨ��
//2. ����дȨ�ޣ����Լ�����ݵ���Ч��

//�������
class Person
{

public:
    //д����
    void setName(string name)
    {
        m_Name = name;
    }
    //��ȡ����
    string getName()
    {
        return m_Name;
    }

    // ��ȡ����  �ɶ���д ������޸ģ�����ķ�Χ������0~150֮�䣩
    int getAge()
    {
       // m_Age = 1;//��ʼ��Ϊ1��
        return m_Age;
    }
    //��������
    void setAge(int age)
    {
        if(age < 0 || age >150)
        {
            m_Age = 0;//����������0��
            cout <<"�������������"<<endl;
            return;
        }
        m_Age = age;
    }


    //  ��������  ֻд
    void setLover(string lover)
    {
        m_Lover = lover;
    }

private:
    //����  �ɶ���д
    string m_Name;
    //����  ֻ��
    int m_Age;
    //����  ֻд
    string m_Lover;
};

int main()
{
    Person p;

    p.setName("����");

    cout << "����Ϊ��" << p.getName() << endl;
    // p.m_Age = 18;   //���� û�з���Ȩ��
    // p.setAge(18);   // ����
    p.setAge(18);
    cout <<"����Ϊ��"<<p.getAge()<<endl;

    p.setLover("����");
    //cout <<"����Ϊ��"<< p.m_Lover()<<endl;  ���ܷ��ʵ�

    return 0;
}