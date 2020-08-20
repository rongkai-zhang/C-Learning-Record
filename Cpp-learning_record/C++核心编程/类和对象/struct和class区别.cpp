#include <iostream>
using namespace std;

class C1
{

    int m_A; //默认权限是 私有
};
struct C2
{
    int m_A; //默认权限 公共
};
int main()
{
    //struct和class区别 
    //struct 默认权限是公共 public
    //class默认权限是 私有 private

    C1 c1;
    //c1.m_A = 100;  报错 没有访问权限

    C2 c2;
    c2.m_A = 100; //在struct中 默认的权限是公共 ，因此可以访问
    return 0;
}