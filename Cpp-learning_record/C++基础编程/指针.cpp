#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int *p = &a;
    //����  int *p;��
    //     p = &a;
    cout << "a�ĵ�ַΪ" << &a << endl;
    cout << "ָ��pΪ  " << p << endl;
    // ָ��ǰ��* ��������ã��ҵ�ָ��ָ����ڴ��е�����
    // *p ��ָ�����ڴ��е�����1����ͨ��*p���޸���ֵ
    *p = 1000;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    // ָ����ռ�Ŀռ�  32λ����ϵͳָ�붼ռ4���ֽ�  64λռ8�ֽ�
    cout << "sizeof(int *) = " << sizeof(*p) << endl;
    cout << "sizeof(float *) = " << sizeof(float *) << endl;
    cout << "sizeof(char *) = " << sizeof(char *) << endl;
    

    return 0;
}