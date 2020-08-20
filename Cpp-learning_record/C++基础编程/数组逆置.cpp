#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 3, 2, 5, 4};
    cout << "逆置前的数组" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "  ";
    }
    int start = 0;                          //其实下标
    int end = sizeof(a) / sizeof(a[0]) - 1; //结束下标
    int t = 0;
    while (start < end)
    {
        t = a[start];
        a[start] = a[end];
        a[end] = t;
        start++;
        end--;
    }
    cout << "逆置后" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "  ";
    }

    return 0;
}