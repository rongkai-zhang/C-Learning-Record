#include <iostream>
using namespace std;

int *func()
{
    //����new�ؼ��ֿ��Խ����ݿ��ٵ�����
    //ָ�뱾��Ҳ�Ǿֲ�����  Ҳ�Ƿ���ջ�ϣ�ָ�뱣������ݷ��ڵĶ���
    int *p = new int(10);
    return p;
}
int main()
{
    //�ڶ�����������
    int *p = func();

    cout << *p << endl;
    cout << *p << endl;

    return 0;
}