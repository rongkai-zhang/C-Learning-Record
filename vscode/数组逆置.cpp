#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 3, 2, 5, 4};
    cout << "����ǰ������" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "  ";
    }
    int start = 0;                          //��ʵ�±�
    int end = sizeof(a) / sizeof(a[0]) - 1; //�����±�
    int t = 0;
    while (start < end)
    {
        t = a[start];
        a[start] = a[end];
        a[end] = t;
        start++;
        end--;
    }
    cout << "���ú�" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "  ";
    }

    return 0;
}