#include <iostream>
using namespace std;
void swap(int a,int b)
{
    int t = a;
    a = b;
    b = t;
    cout <<"swap中 a= "<<a<<endl;
    cout <<"swap中 b= "<<b<<endl;
}
void swap_1(int *p1,int *p2)
{
    int t = *p1;
    *p1 = *p2;
    *p2 = t;

}
int main()
{
    //用指针作为指针的参数可以修改指针的值
    int a = 10;
    int b = 20;
    swap(a,b);
    cout <<"main函数里a = "<<a <<endl;
    cout <<"main函数里b = "<<b <<endl;
    swap_1(&a,&b);
    cout <<"指针作为参数时main函数里a="<<a<<endl;
    cout <<"指针作为参数时main函数里b="<<b<<endl;








    return 0;
}