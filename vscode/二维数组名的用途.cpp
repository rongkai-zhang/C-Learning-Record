#include <iostream>
using namespace std;
int main()
{
    int a[2][3] =
    {
        {1,2,3,},
        {4,5,6}
    };
    cout <<"二维数组占用的内存空间" <<sizeof(a)<<endl;
    cout <<"二维数组第一行占用的内存空间"<<sizeof(a[0])<<endl;
    cout<<"二维数组第一个元素所占用的内存空间"<<sizeof(a[0][0])<<endl;
    cout<<"二维数组的行数为"<<sizeof(a)/sizeof(a[0])<<endl;
    cout<<"二维数组的列数为"<<sizeof(a[0])/sizeof(a[0][0])<<endl;
    cout <<"二维数组的首地址为："<<(int)a<<endl;
    cout <<"二维数组第一行首地址为"<<(int)a[0]<<endl;
    cout <<"二维数组第二行首地址为"<<(int)a[1]<<endl;//与第一行差12字节
    cout <<"二维数组第一个元素的址为："<<(int)&a[0][0]<<endl;



    return 0;
}