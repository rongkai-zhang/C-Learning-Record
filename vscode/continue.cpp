#include <iostream>
using namespace std;
int main()
{
    //continue 在循环语句中跳过本次循环中尚<未执行的语句，继续下一次循环
    int i = 0;
    for (i = 0; i < 100; i++)
    {
        //只输出奇数，不输出偶数
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}