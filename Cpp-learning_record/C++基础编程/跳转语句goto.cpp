#include <iostream>
using namespace std;
int main()
{
    //goto 标记;
    //如果标记存在的话,执行goto语句时,会跳转到标记的位置
    cout << "哲" << endl;
    cout << "屙" << endl;
    goto Jump;
    cout << "威" << endl;
    cout << "武" << endl;
    Jump: //加的是冒号 :
    cout << "憨" << endl;
    cout << "逼" << endl;

    return 0;
}