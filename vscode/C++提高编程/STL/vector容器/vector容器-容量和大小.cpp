#include <iostream>
using namespace std;
#include <vector>

void printVecotr(vector<int> &v)
{
    for(vector<int>::iterator it = v.begin();it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

//vector 容器的容量和大小操作

void test01()
{
    vector<int>v1;
    for(int i = 0;i< 10;i++)
    {
        v1.push_back(i);
    }
    printVecotr(v1);

    if(v1.empty()) //为真 带包容器为空
    {
        cout<<"v1为空"<<endl;
    }
    else 
    {
        cout<<"v1不为空"<<endl;
        cout<<"v1的容量为："<< v1.capacity()<<endl;
        cout<<"v1的大小为："<<v1.size()<<endl;
    }
    
    //重新指定大小
    v1.resize(15,100); //可以利用重载的版本来指定默认的填充值
    printVecotr(v1); //如果重新指定的比原来长了默认用0填充新的位置

    v1.resize(5);
    printVecotr(v1);  //如果重新制定的比原来的短了超出的部分会删除掉

}

int main()
{
    test01();

    return 0;
}