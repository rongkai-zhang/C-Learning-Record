#include <iostream>
using namespace std;

//�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����

//��ͨд��
class Calculator
{
public:
    int getResult(string oper)
    {
        if (oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if (oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if (oper == "*")
        {
            return m_Num1 * m_Num2;
        }
        else
        {
            return 0;
        }
        
        //�������չ�µĹ��ܣ���Ҫ�޸�ԭ��
        //����ʵ������ �ᳫ ����ԭ��
        //����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
    }

    int m_Num1; //������1
    int m_Num2; //������2
};

void test01()
{
    //����һ������������
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;

    cout << c.m_Num1 << "+" << c.m_Num2 << " = " << c.getResult("+") << endl;

    cout << c .m_Num1 << "-" << c.m_Num2 << " = " << c.getResult("-") << endl;

    cout << c.m_Num1 << "*" << c.m_Num2 << " = " << c.getResult("*") << endl;
}

//���ö�̬ʵ�ּ�����
//��̬�ô�
//1.��֯����
//2.�ɶ���ǿ
//3.����ǰ�ںͺ�����չ�Լ�ά���Ը�
//ʵ�ּ�����������
class AbstractCalculator
{
public:
    virtual int getResult()
    {
        return 0;

    }


    int m_Num1;
    int m_Num2;

};

//��Ƽӷ���������
class AddCalculator: public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }

};

//������������
class subCalculator: public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 - m_Num2;
    }

};

//�˷�������
class MulCalculator: public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 * m_Num2;
    }

};

void test02()
{
    //��̬ʹ������
    //����ָ���������ָ���������

    //�ӷ�����
    AbstractCalculator * abc = new AddCalculator;
    abc->m_Num1 = 100;
    abc->m_Num2 = 10;

    cout<< abc->m_Num1<<" + "<< abc->m_Num2<<" = "<<abc->getResult()<<endl;
    //���������
    delete abc;

    //��������
    abc = new subCalculator;
    abc->m_Num1 = 100;
    abc->m_Num2 = 10;

    cout<< abc->m_Num1<<" - "<< abc->m_Num2<<" = "<<abc->getResult()<<endl;
    delete abc;

    //�˷�����
    abc = new MulCalculator;
    abc->m_Num1 = 100;
    abc->m_Num2 = 10;

    cout<< abc->m_Num1<<" * "<< abc->m_Num2<<" = "<<abc->getResult()<<endl;

    delete abc;
    




}



int main()
{
    // test01();
    test02();
    return 0;
}