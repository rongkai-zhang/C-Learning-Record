#include <iostream>
using namespace std;
int main()
{
    int a[9] = {1, 5, 4, 8, 9, 6, 3, 2, 7};
    //冒泡排序从小到大排序
    cout << "排序前" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
    int t;
    for (int i = 0; i < 9 - 1; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    cout << "排序后" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << a[i] << "  ";
    }

    return 0;
}