#include <iostream>
using namespace std;
int main()
{
    int a[9] = {1, 5, 4, 8, 9, 6, 3, 2, 7};
    //√∞≈›≈≈–Ú¥”–°µΩ¥Û≈≈–Ú
    cout << "≈≈–Ú«∞" << endl;
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
    cout << "≈≈–Ú∫Û" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << a[i] << "  ";
    }

    return 0;
}