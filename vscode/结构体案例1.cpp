#include <iostream>
#include <string>
using namespace std;
struct student //ѧ��
{
    string name;
    int score;
};
struct teacher //��ʦ
{
    string name;
    struct student sa[5];
};
void allocatespace(struct teacher ta[], int len) //��ֵ����
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        ta[i].name = "techer_";
        ta[i].name += nameSeed[i];
        for (int j = 0; j < 5; j++)
        {
            ta[i].sa[j].name = "student_";
            ta[i].sa[j].name += nameSeed[j];
            ta[i].sa[j].score = 60;
        }
    }
}
void print(struct teacher ta[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "��ʦ����" << ta[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "ѧ��������" << ta[i].sa[j].name
                 << "  ���Է���" << ta[i].sa[j].score << endl;
        }
    }
}

//����������
//ѧУ������������Ŀ��ÿ����ʦ�����ѧ�����ܹ���������ʦ����������
//���ѧ������ʦ�Ľṹ�壬����ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
//ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ������ѧ����ֵ
//���մ�ӡ����ʦ�����Լ���ʦ����ѧ��������
int main()
{
    teacher ta[3]; //����3����ʦ������
    int len = sizeof(ta) / sizeof(ta[0]);
    allocatespace(ta, len); //�ú�����3����ʦ��ֵ������ʦ������ѧ����ֵ
    print(ta, len);

    return 0;
}