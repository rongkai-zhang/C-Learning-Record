#include <iostream>
using namespace std;

const double PI = 3.14;

//���һ��Բ�� ����Բ���ܳ�

// class �������һ���࣬���������ŵ���������
class Circle
{
    //����Ȩ��
    //����Ȩ��
public:
    //����
    int m_r; //�뾶

    //��Ϊ
    //��ȡԲ���ܳ�
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};
int main()
{
    //ͨ��Բ�� ���������Բ������
    //ʵ���� ��ͨ��һ���ഴ��һ������Ĺ��̣�
    Circle c1;
    //��Բ����  �����Խ��и�ֵ
    c1.m_r = 10;

    cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;

    return 0;
}