#include <iostream>
using namespace std;
struct hero
{
    string name;
    int age;
    string sex;
};
void bubbleSort(hero arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j].age > arr[j + 1].age)
            {
                hero t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
void printhero(hero arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "������" << arr[i].name << "  "
             << "���䣺" << arr[i].age << "  "
             << "�Ա�" << arr[i].sex << endl;
    }
}
//���һ��Ӣ�۵Ľṹ�壬������Ա�����������䡢�Ա𣻹����ṹ������
//��������5��Ӣ�ۣ�ͨ��ð��������㷨���������е�Ӣ�۰�������������������������
int main()
{
    hero arr[5] =
        {
            {"����  ", 23, " ��"},
            {"����  ", 22, " ��"},
            {"�ŷ�  ", 20, " ��"},
            {"����  ", 21, " ��"},
            {"����  ", 19, " Ů"}
        };
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);
    printhero(arr, len);

    return 0;
}