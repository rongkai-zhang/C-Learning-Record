#include <iostream>
using namespace std;

//1. ���캯���ķ���͵���
//����
//    ���ղ�������  �޲ι��죨Ĭ�Ϲ��죩 �� �вι���
//    �������ͷ���  ��ͨ����   ��������
class Person
{
public:
    //���캯��
    Person()
    {
        cout << "Person���޲ι��캯���ĵ���" << endl;
    }

    Person(int a)
    {
        age = a;
        cout << "Person���вι��캯���ĵ���" << endl;
    }

    //�������캯��
    Person(const Person &p) //��ס const ����  ����
    {
        //������������ϵ��������Կ�����������
        age = p.age;
        cout << "Person�Ŀ������캯���ĵ���" << endl;
    }

    ~Person()
    {
        cout << "Person�����������ĵ���" << endl;
    }
    int age;
};

//����
void test01()
{
    // 1. ���ŷ�
    // Person p1;     //Ĭ�Ϲ��캯���ĵ���
    // Person p2(10); //�вι��캯��
    // Person p3(p2); //�������캯��

    //ע������
    //����Ĭ�Ϲ��캯����ʱ��Ҫ�ӣ���
    //��Ϊ�������д��룬����������Ϊ��һ������������ ��������Ϊ�ڴ�������
    // Person p1();

    // cout <<"p2������Ϊ:"<<p2.age<<endl;
    // cout <<"p3������Ϊ:"<<p3.age<<endl;

    //2. ��ʾ��
    // Person p1;
    // Person p2 = Person(10); //�вι���
    // Person p3 = Person(p2);//��������

    // Person(10);//�������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
    // cout<<"bbbbbbbbb"<<endl;

    //ע������2 
    // ��Ҫ���ÿ����������캯�� ��ʼ����������  ����������Ϊ Person��p3�� == Person p3;��������
    // Person (p3);
    //3. ��ʽת����
    Person p4 = 10; // �൱��  Person p4 = Person��10���� �вι���
    Person p5 = p4; //�������� �뵱�� Person p5 = Person��p4����
}
//����
int main()
{
    test01();

    return 0;
}