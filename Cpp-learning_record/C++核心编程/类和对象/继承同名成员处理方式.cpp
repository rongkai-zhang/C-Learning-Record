#include <iostream>
using namespace std;

//�̳���ͬ���ĳ�Ա����ʽ
//1.����������ֱ�ӷ��ʵ�������ͬ������
//2.����������������Է��ʵ�����ͬ����Ա
//3.�������븸��ӵ��ͬ���ĳ�Ա��������������ظ�����ͬ����Ա����������������Է��ʵ�������ͬ������
class Base
{
public:
    Base()
    {
        m_A = 100;
    }
    void func()
    {
        cout << "Base - func()����" << endl;
    }

    void func( int a )
    {
        cout << "Base - func(int a )����" << endl;
    }
    int m_A;
};

class Son : public Base
{
public:
    Son()
    {
        m_A = 200;
    }

    void func()
    {
        cout << "Son - func()����" << endl;
    }
    int m_A;
};

//ͬ����Ա���Դ���
void test01()
{
    Son s;
    cout << "Son �� m_A = " << s.m_A << endl;
    //���ͨ��������� ���ʵ�������ͬ����Ա����Ҫ��������
    cout << "Base �� m_A = " << s.Base::m_A << endl;
}

//ͬ����Ա��������
void test02()
{
    Son s;

    s.func(); //ֱ�ӵ��õ��õ��������е�ͬ����Ա 

    //��ε��õ������е�ͬ����Ա
    s.Base::func();
   
    //��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
    //�������ʸ����б����ص�ͬ����Ա��������Ҫ��������
    // s.func(100);
    s.Base::func(100);


}
int main()
{

    //test01();
    test02();
    return 0;
}