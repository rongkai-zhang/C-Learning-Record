#include <iostream>
using namespace std;
int main()
{
    int a[2][3] =
    {
        {1,2,3,},
        {4,5,6}
    };
    cout <<"��ά����ռ�õ��ڴ�ռ�" <<sizeof(a)<<endl;
    cout <<"��ά�����һ��ռ�õ��ڴ�ռ�"<<sizeof(a[0])<<endl;
    cout<<"��ά�����һ��Ԫ����ռ�õ��ڴ�ռ�"<<sizeof(a[0][0])<<endl;
    cout<<"��ά���������Ϊ"<<sizeof(a)/sizeof(a[0])<<endl;
    cout<<"��ά���������Ϊ"<<sizeof(a[0])/sizeof(a[0][0])<<endl;
    cout <<"��ά������׵�ַΪ��"<<(int)a<<endl;
    cout <<"��ά�����һ���׵�ַΪ"<<(int)a[0]<<endl;
    cout <<"��ά����ڶ����׵�ַΪ"<<(int)a[1]<<endl;//���һ�в�12�ֽ�
    cout <<"��ά�����һ��Ԫ�ص�ַΪ��"<<(int)&a[0][0]<<endl;



    return 0;
}