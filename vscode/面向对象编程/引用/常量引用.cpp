#include <iostream>
using namespace std;

void showValue(const int &val)  //�������һ��ֻ��ӡ�ĺ������Ϳ��ܻ��иı�����������
{
    //val = 1000;
    cout << "val = " << val << endl;
}
int main()
{
    //��������
    //�����β�����ֹ�����

    //int a = 10;
    //int &ref = 10; //�����  ���ñ�����һ��Ϸ����ڴ�ռ�
    //����const֮��������������޸�Ϊ int t = 10��const int &ref = t�� ��������ʱ�Ŀռ�
    // const int &ref = 10;//������
    // ref = 20;//����const  ֮���Ϊֻ���������޸�
    int a = 100;
    showValue(a);
    cout << "a = " << a << endl;

    return 0;
}