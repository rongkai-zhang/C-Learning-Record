#include <iostream>
using namespace std;
int main()
{
    //个位十位�?3   3的倍数  就敲桌子
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 || i % 10 == 3 || i / 10 == 3)
        {

            cout << "������" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    return 0;
}