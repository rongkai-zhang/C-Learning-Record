#include <iostream>
using namespace std;
int main()
{
    //ָ�������
    //����ָ����������е�Ԫ��
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "��һ��Ԫ��Ϊ��" << a[0] << endl;

    int *p = a; //����ָ��ָ������

    cout << "��ָ�������ʵ�һ��Ԫ��Ϊ��" << *p << endl;

    p++;

    cout <<"����ָ����ʵڶ���Ԫ��"<<*p<<endl;
    //ͨ��ָ�������������
    cout <<"����ָ���������:"<<endl;
    int *p2 = a;
    for(int i = 0;i<10 ;i++)
    {
        cout <<*p2<<"  ";
        p2++;

    }

    return 0;
}