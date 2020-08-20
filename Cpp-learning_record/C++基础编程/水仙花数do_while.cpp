#include <iostream>
using namespace std;
int main()
{
    //水仙花数：一个3位数。每位上的数字的3次幂之和等于他本身
    //例如  1^3+5^3+3^3 = 153

    int num = 100;
    do
    {
        int a = 0;         //个位
        int b = 0;         //十位
        int c = 0;         //百位
        a = num % 10;      //求出个位
        b = num / 10 % 10; //求出十位位
        c = num / 100;     //求出百位

        if (a * a * a + b * b * b + c * c * c == num)
        {
            cout << num << endl;
        }
        num++;
    } while (num < 1000);
    return 0;
}