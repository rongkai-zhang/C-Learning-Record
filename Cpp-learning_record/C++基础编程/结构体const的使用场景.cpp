#include <iostream>
#include <string>
using namespace std;
//��const����ֹ�����
//const ��ʹ�ó���
//ʹ�ú���ʱ�򵱸���������ʵ���൱�ڸ�����һ�ݸ��������������ʱ��
//���紫��ָ�룬ָ��ֻռ4���ֽڣ���ָ����޸Ĳ�����ֵ������const�Ϳ��Ա���
struct student
{
    string name;
    int age;
    int score;
};
void printstudent(const student *s)
{
    //s->age = 150;  ����const��������ᱨ��  ������
    cout<<"print������"<<endl;
    cout << "������" << s->name << endl
         << "���䣺" << s->age << endl
         << "������" << s->score << endl;
}
  
int main()
{
    //�����ṹ�����
    student s = {"����", 20, 100};
    printstudent(&s); 
    cout<<"main������"<<endl;
    cout << "������" << s.name << endl
         << "���䣺" << s.age << endl
         << "������" << s.score << endl;

    return 0;
}