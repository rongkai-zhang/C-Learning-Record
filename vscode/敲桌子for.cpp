#include <iostream>
using namespace std;
int main()
{
    //ä¸ªä½åä½å¸?3   3çš„å€æ•°  å°±æ•²æ¡Œå­
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 || i % 10 == 3 || i / 10 == 3)
        {

            cout << "ÇÃ×À×Ó" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    return 0;
}