#include <iostream>
using namespace std;
//����ѧ���Ľṹ��
struct student
{
    string name;
    int age;
    int score;
};
//1.ֵ����
void printstudent1(struct student s)
{
    s.age = 200;
    cout << "����1��������" << s.name << endl
         << "����1�����䣺" << s.age << endl
         << "����1�з�����" << s.score << endl;
}
//2.��ַ����
void prnitstudent2(struct student *p)
{
    p->age = 300;
    cout << "����2��������" << p->name << endl
         << "����2�����䣺" << p->age << endl
         << "����2�з�����" << p->score << endl;
}
int main()
{
    //�ṹ���������Ĳ���
    //��ѧ������һ�����������ѧ������Ϣ
    student s;
    s.name = "����";
    s.age = 20;
    s.score = 100;
    printstudent1(s);
    prnitstudent2(&s);
    cout << "main������������" << s.name << endl
         << "main���������䣺" << s.age << endl
         << "main�����з�����" << s.score << endl;

    return 0;
}