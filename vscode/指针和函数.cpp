#include <iostream>
using namespace std;
void swap(int a,int b)
{
    int t = a;
    a = b;
    b = t;
    cout <<"swap�� a= "<<a<<endl;
    cout <<"swap�� b= "<<b<<endl;
}
void swap_1(int *p1,int *p2)
{
    int t = *p1;
    *p1 = *p2;
    *p2 = t;

}
int main()
{
    //��ָ����Ϊָ��Ĳ��������޸�ָ���ֵ
    int a = 10;
    int b = 20;
    swap(a,b);
    cout <<"main������a = "<<a <<endl;
    cout <<"main������b = "<<b <<endl;
    swap_1(&a,&b);
    cout <<"ָ����Ϊ����ʱmain������a="<<a<<endl;
    cout <<"ָ����Ϊ����ʱmain������b="<<b<<endl;








    return 0;
}