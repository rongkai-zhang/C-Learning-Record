#include <iostream>
using namespace std;

//��Ա���� �� ��Ա���� �ֿ��洢��

class Person
{

    int m_A;//�Ǿ�̬��Ա����  ������Ķ����ϵ�
    
    static int m_B;//��̬��Ա����  ��������Ķ�����

    void func()  //�Ǿ�̬��Ա���� ��������Ķ�����
    {

    }
    static void func2()//��̬��Ա���� ��������Ķ�����
    {

    }

};

int Person::m_B = 0;
void test01()
{
    Person p;
    //�ն���ռ�õ��ڴ�ռ�Ϊ��1
    //C++���������ÿ���ն���Ҳ����һ���ֽڵĿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ�ã�����˵���ն���
    //ؿ���ն���ҲӦ���и���һ�޶����ڴ��ַ
    cout <<"size of p = "<<sizeof(p)<<endl;
}

void test02()
{ 
    Person p;

    cout <<"size of p = "<<sizeof(p)<<endl;

}

int main()
{

    // test01();
    test02();
    return 0;
}