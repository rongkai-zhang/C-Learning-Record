#include <iostream>
using namespace std;

class C1
{

    int m_A; //Ĭ��Ȩ���� ˽��
};
struct C2
{
    int m_A; //Ĭ��Ȩ�� ����
};
int main()
{
    //struct��class���� 
    //struct Ĭ��Ȩ���ǹ��� public
    //classĬ��Ȩ���� ˽�� private

    C1 c1;
    //c1.m_A = 100;  ���� û�з���Ȩ��

    C2 c2;
    c2.m_A = 100; //��struct�� Ĭ�ϵ�Ȩ���ǹ��� ����˿��Է���
    return 0;
}