#include <iostream>
using namespace std;

//占位参数
// 返回值类型 函数名（数据类型）{}

// 目前阶段的占位参数我们还用不到 后面课程会用到 
// 占位参数还可以有默认参数   有默认参数调用时可以不用传参数 void func（int a，int = 10）{}
void func(int a,int)
{
    cout << "this is func" << endl;
}
int main()
{
    func(10,10);

    return 0;
}