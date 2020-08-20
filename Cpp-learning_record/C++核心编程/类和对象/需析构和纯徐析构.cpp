#include <iostream>
using namespace std;

//�������ʹ�������

class Animal
{
public:
    Animal()
    {
        cout<<"Animal�Ĺ��캯������"<<endl;
    }

    //�������������Խ��  ����ָ���ͷ��������ʱ���ɾ�������
    // virtual~Animal()
    // {
    //     cout<<"Animal����������������"<<endl;
    // }

    //��������  ��Ҫ���� Ҳ��Ҫ����ʵ��
    //���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ��������
    virtual ~Animal()= 0;

    //���麯��
    virtual void speak() = 0;
};

 Animal::~Animal()
 {
    cout<<"Animal�Ĵ���������������"<<endl;
 }


class Cat : public Animal
{
public:
    Cat(string name)
    {
        cout<<"Cat���캯������"<<endl;
        m_Name = new string(name);
    }
    
    virtual void speak()
    {
        cout <<*m_Name <<"Сè��˵��" << endl;
    } 

    ~Cat()
    {
        if(m_Name != NULL)
        {
            cout<<"Cat������������"<<endl;
            delete m_Name;
            m_Name = NULL;
        }
    }

    string *m_Name;
};

void test01()
{
    Animal * animal = new Cat("Tom");
    animal->speak();
    //����ָ����������ʱ�� ��������������������� ������������ж������ԣ������ڴ�й©
    delete animal;
}

int main()
{
    test01();
    return 0;
}
// �ܽ᣺
//     1.�鹹���鹹�����������ͨ������ָ���ͷ��������
//     2.���������û�ж������ݣ����Բ�д�鹹���鹹
//     3.ӵ�д��鹹��������Ҳ���ڳ������޷�ʵ��������