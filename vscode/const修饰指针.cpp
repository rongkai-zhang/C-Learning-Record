#include <iostream>
using namespace std;
int main()
{
    //1.const����ָ��  ����ָ��
    int a = 10;
    int b = 10;
    const int *p = &a; //ָ��ָ���ֵ���ܸģ�ָ��ָ���ָ����Ը�
    //*p = 20������
    p = &b; //������

    //2. const ���γ���  ָ�볣��
    int *const p2 = &a;//ָ���ָ���ܸģ�ָ��ָ���ֵ���Ը�
    *p2 = 100;//������
    //p2 = &b; ����

    //3.const ����ָ��ͳ���
    const int * const p3 = &a;//ָ���ָ���ָ��ָ���ֵ�����ܸ�
    //*p3 = 100; ����
    //*p3 = &b;  ����

        return 0;
}