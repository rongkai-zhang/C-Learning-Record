#include <iostream>
using namespace std;
//Ã°ÅÝÅÅÐòº¯Êý
void bubblesort(int *a, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}
void printa(int *a, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << "  ";
    }
}
int main()
{
    int a[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    int len = sizeof(a) / sizeof(a[0]);
    cout << "ÅÅÐòÇ°" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << "  ";
    }
    bubblesort(a, len);
    cout <<endl<< "ÅÅÐòºó" << endl;
    printa(a, len);

    return 0;
}