#include <iostream>
using namespace std;
//����Ĭ�ϲ���

//������Ǵ��������ݾ������Ǵ�������ݣ��������û�����ݣ�����Ĭ��ֵ
//  �﷨��  ����ֵ���� ���������β� = Ĭ��ֵ��{}
int func(int a , int b , int c = 30)
{
    return a + b + c;
}


//  ע������
//1. ���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
// int func2(int a, int b = 10,int c  )//�����
// {
//     return a+b+c;
// }

//2. ������������Ѿ�����Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
// ���� ��ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a ,int b );

int func2(int a = 10, int b = 10)
{
    return a+b;
}

int main()
{
    cout << func(10 ,30) << endl;
    cout <<func2()<<endl;

    return 0;
}