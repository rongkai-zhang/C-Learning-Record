#include <iostream>
using namespace std;
int main()
{
    //continue ��ѭ���������������ѭ������<δִ�е���䣬������һ��ѭ��
    int i = 0;
    for (i = 0; i < 100; i++)
    {
        //ֻ��������������ż��
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}