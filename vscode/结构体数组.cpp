#include <iostream>
#include <string>
using namespace std;

//�ṹ������
//1. ����ṹ��
struct Student
{
    //����
    string name;
    //����
    int age;
    //����
    int score;
};

int main()
{
    //2�����ṹ������
    struct Student stua[3] =
        {
            {"����", 18, 100},
            {"����", 28, 60},
            {"����", 38, 66}};
    //3. ���ṹ�������е�Ԫ�ظ�ֵ
    stua[2].name = "����";
    stua[2].age = 10;
    stua[2].score = 88; //���޸�����ֵ
    //�����ṹ������
    for (int i = 0; i < 3; i++)
    {
        cout << "������" << stua[i].name
             << "���䣺" << stua[i].age
             << "�ɼ���" << stua[i].score << endl;
    }

    return 0;
}