#include <iostream>
using namespace std;
int main()
{
    //  ���þ��Ǹ����������  �����﷨��
    // ��������  &���� = ԭ��  �� Ȼ��ԭ�������Ͷ����Է����ǿ��ڴ���

    //ע������
    //1.���ñ����ʼ��
    //2. �����ڳ�ʼ�����ܸı�

    int a = 10;
    int &b = a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}