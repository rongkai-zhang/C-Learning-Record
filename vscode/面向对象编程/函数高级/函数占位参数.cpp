#include <iostream>
using namespace std;

//ռλ����
// ����ֵ���� ���������������ͣ�{}

// Ŀǰ�׶ε�ռλ�������ǻ��ò��� ����γ̻��õ� 
// ռλ������������Ĭ�ϲ���   ��Ĭ�ϲ�������ʱ���Բ��ô����� void func��int a��int = 10��{}
void func(int a,int)
{
    cout << "this is func" << endl;
}
int main()
{
    func(10,10);

    return 0;
}