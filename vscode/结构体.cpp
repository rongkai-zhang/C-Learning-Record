#include <iostream>
using namespace std;
#include <string>
//�ṹ��: �����û��Զ�����������ͣ�����洢��ͬ����������
//Ҳ����һЩ�������ͼ�����ɵ�һ������
//ʹ�÷�����
// struct �ṹ���� {�ṹ���Ա�б�} ��

//1.����ѧ������������ ��ѧ�����������������䡣������
struct Student
{
    //��Ա�б�

    //����
    string name;
    //����
    int age;
    //����
    int score;
}s3;// ˳�㴴��һ���ṹ�����
//2.ͨ��ѧ���������ʹ��������ѧ��

//2.1 struct Student s1
//2.2 struct Student s2 = {...}
//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����

int main()
{
    //2.1 struct Student s1
    struct Student s1;//C++�� struct�ؼ��ֿ���ʡ��
    //��s1���Ը�ֵ  ͨ�� .���ʽṹ������е�����
    s1.name = "���� ";
    s1.age = 20;
    s1.score = 100;
    cout << "������ " << s1.name << "���䣺 " << s1.age << "������" << s1.score << endl;

    //2.2 struct Student s2 = {...}
    struct Student s2 = {"���� ", 18, 90};

    cout << "������ " << s2.name << "���䣺 " << s2.age << "������" << s2.score << endl;
    //2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����  ������
    s3.name = "���� ";
    s3.age = 21;
    s3.score = 70;
    cout << "������ " << s3.name << "���䣺 " << s3.age << "������" << s3.score << endl;
   
    

    return 0;
}