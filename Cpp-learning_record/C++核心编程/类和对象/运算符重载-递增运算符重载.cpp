#include <iostream>
using namespace std;

//���ص��������

//�Զ��������
class MyInteger
{
    friend ostream &operator<<(ostream &cout, MyInteger myint);

public:
    MyInteger()
    {
        m_Num = 0;
    }


    //����ǰ��++�����  ��������Ϊ��һֱ��һ�����ݽ��в���
    MyInteger & operator++()
    {
        //�Ƚ���+����
        m_Num++;

        //�ٽ�����������
        return *this;
    }

    //���غ���++�����  
    //void operator++(int)  int ����ռλ������������������ǰ�û��Ǻ���
    MyInteger operator++(int)  //Ҫ����ֵ   ����������� temp�Ǹ��ֲ���������ִ����ͱ��ͷ���
    {
        //�� ��¼��ʱ�Ľ��
        MyInteger temp = *this;
        //��  ����
        m_Num++;
        //��� ����¼�Ľ������
        return temp;
    }
private:
    int m_Num;
};

//�������������  
ostream &operator<<(ostream &cout, MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}
void test01()
{
    MyInteger myint;

    cout << ++(++myint) << endl;
    cout <<myint<<endl;
}


void test02()
{
    MyInteger myint;
    cout <<myint++<<endl;
    cout <<myint<<endl;
}
int main()
{

    //test01();
    test02();

    return 0;
}
//ǰ�õ�����������   ���õ�������ֵ