#include <iostream>
using namespace std;
//����ѧ���Ľṹ��
struct studebt
{
    string name;
    int age;
    int score;
};
//����һ����ʦ�Ľṹ�����һ��ѧ���Ľṹ��
struct teacher
{
    int id; //��ʦ���
    string name;
    int age;
    struct studebt stu; //������ѧ��
};
int main()
{
    //�ṹ��Ƕ�׻�����
    //������ʦ
    teacher t;
    t.id = 948587;
    t.age = 30;
    t.name = "����";
    t.stu.name = "С��";
    t.stu.age = 20;
    t.stu.score = 99;
    //��������Ϣ
    cout << "��ʦ������Ϊ��" << t.name << endl
         << "��ʦ�ı��Ϊ��" << t.id << endl
         << "��ʦ������Ϊ��" << t.age << endl
         << "��ʦ������ѧ��������" << t.stu.name << endl
         << "��ʦ������ѧ�������䣺" << t.stu.age << endl
         << "��ʦ������ѧ���ķ�����" << t.stu.score << endl;

    return 0;
}