#include <iostream>
using namespace std;
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "����������ռ���ڴ�ռ�Ϊ:" << sizeof(a) << endl;
    cout << "ÿ��Ԫ����ռ���ڴ�ռ�Ϊ:" << sizeof(a[0]) << endl;
    cout << "�����Ԫ�ظ���Ϊ:" << sizeof(a) / sizeof(a[0]) << endl;
    cout << "������׵�ַΪ " << (int)a << endl; //Ĭ�ϵ�ַ�������16���� �ã�int������ǿ������ת��
    cout << "�����е�һ��Ԫ�صĵ�ַΪ" << (int)&a[0] << endl;
    cout << "�����еڶ���Ԫ�صĵ�ַΪ" << (int)&a[1] << endl;
    return 0;
}