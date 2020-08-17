#include <iostream>
using namespace std;
int main()
{
    //³Ë·¨¿Ú¾÷±í
    int i = 0;
    int j = 0;
    for(i = 1;i <= 9; i++)
    {
        for (j = 1;j<=i;j++)
        {
            cout <<j<<"*"<<i<<"="<<j*i<<"  ";


        }
        cout <<endl;

    }

}