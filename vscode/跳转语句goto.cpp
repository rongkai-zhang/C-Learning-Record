#include <iostream>
using namespace std;
int main()
{
    //goto ���;
    //�����Ǵ��ڵĻ�,ִ��goto���ʱ,����ת����ǵ�λ��
    cout << "��" << endl;
    cout << "��" << endl;
    goto Jump;
    cout << "��" << endl;
    cout << "��" << endl;
    Jump: //�ӵ���ð�� :
    cout << "��" << endl;
    cout << "��" << endl;

    return 0;
}