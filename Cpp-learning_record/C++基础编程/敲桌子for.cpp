#include <iostream>
using namespace std;
int main()
{
    //带有3或者3的倍数时敲桌子
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 || i % 10 == 3 || i / 10 == 3)
        {

            cout << "敲桌子" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    return 0;
}