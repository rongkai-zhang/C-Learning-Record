#include <iostream>
using namespace std;

void mySwap01(int a, int b) //ֵ����
{
    int t = a;
    a = b;
    b = t;
    // cout << "mySwap01�� a = " << a << endl;
    // cout << "mySwap01�� b = " << b << endl;
}

void mySwap02(int *a, int *b) // ��ַ����
{
    int t = *a;
    *a = *b;
    *b = t;
    cout << "mySwap02�� a = " << a << endl;
    cout << "mySwap02�� b = " << b << endl;
}

void mySwap03(int &a, int &b)  // ���ô���
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    //�����������Ĳ���
    // ���ã���������ʱ�������������õļ������β�����ʵ��
    // �ŵ� �����Լ�ָ���޸�ʵ��

    int a = 10;
    int b = 20;
    //  mySwap01(a, b); //ֵ���� �ββ�������ʵ��
    //  mySwap02(&a, &b);  //��ַ���ݣ��βλ�����ʵ��
    mySwap03(a, b); //���ô��� �β�Ҳ������ʵ��

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}