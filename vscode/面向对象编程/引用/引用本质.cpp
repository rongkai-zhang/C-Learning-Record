#include <iostream>
using namespace std;

void func(int &ref)
{
    ref = 100;
}
int main()
{
    // ���õı�����c++�ڲ�ʵ����һ�� ָ�볣��  ָ���ָ���ܱ�
    int a = 10;

    int &ref = a; //�Զ�ת��Ϊ  int * const ref = &a;
    ref = 20;     // �ڲ�����ref������ ���Զ�������ת���� *ref = 20��

    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;

    func(a);
    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;

    return 0;
}