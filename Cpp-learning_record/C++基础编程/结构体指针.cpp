#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int age;
    int score;
};

int main()
{
    //�ṹ��ָ�룺ͨ��ָ����ʽṹ���еĳ�Ա

    //1.����ѧ���ṹ�����
    struct student s = {"����", 18, 100};

    //2.ͨ��ָ��ָ��ṹ�����
    student *p = &s; //�ؼ���struct ����ʡ��

    //3. ͨ��ָ�������ʽṹ������е�����
    //ͨ���ṹ��ָ����ʽṹ���е����ԣ�Ҫ���á�->��

    cout << "������" << p->name << "  "
         << "����: " << p->age << "  "
         << "�ɼ���" << p->score << "  " << endl;

    return 0;
}