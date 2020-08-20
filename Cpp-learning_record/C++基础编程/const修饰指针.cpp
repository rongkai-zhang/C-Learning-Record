#include <iostream>
using namespace std;
int main()
{
    //1.const修饰指针  常量指针
    int a = 10;
    int b = 10;
    const int *p = &a; //指针指向的值不能改，指针指向的指向可以改
    //*p = 20；错误
    p = &b; //可以有

    //2. const 修饰常量  指针常量
    int *const p2 = &a;//指针的指向不能改，指针指向的值可以改
    *p2 = 100;//可以有
    //p2 = &b; 错误

    //3.const 修饰指针和常量
    const int * const p3 = &a;//指针的指向和指针指向的值都不能改
    //*p3 = 100; 错误
    //*p3 = &b;  错误

        return 0;
}