#include <iostream>
using namespace std;

//��̬

//������
class Animal
{ 
public:
    //����virtual    �麯��
    virtual void speak()
    {
        cout << "������˵��" << endl;
    }
};

class Cat : public Animal
{
public:
    //��д ��������ֵ����  �������� �����б�  ����ȫ��ͬ ��virtual�ؼ��ֿ�д�ɲ�д��
    void speak()
    {
        cout << "Сè��˵��" << endl;
    }
};

//����
class Dog : public Animal
{
    void speak()
    {
        cout << "С����˵��" << endl;
    }
};

//ִ��˵���ĺ���
//��ַ��� �ڱ���׶�ȷ��������ַ
//�����ִ����è˵���������������ĵ�ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���

//��̬������������
//1. �м̳й�ϵ
//2. ����Ҫ��д������麯��

//��̬����ʹ��
//�����ָ��������� ִ���������

void doSpeak(Animal &animal) //Animal &animal = cat;
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

int main()
{
    test01();

    return 0;
}

// ��̬������
//     ����̬��̬���������� �� ������������ھ�̬���ģ����ú�����
//     ����̬��̬����������麯��ʵ������ʱ����
// ��̬��̬�Ͷ�̬��̬����
//     ����̬���ĵĺ�����ַ��� - ����׶�ȷ��������ַ
//     ����̬���ĵ�ɼ����ַ��� - ���н׶�ȷ��������ַ