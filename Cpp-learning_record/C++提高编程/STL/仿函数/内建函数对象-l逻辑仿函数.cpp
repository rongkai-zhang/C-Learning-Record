#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>
/*
logical_and<T>    逻辑与
logical_or<T>     逻辑或  
logical_not<T>    逻辑非
*/

//内建的函数对象  逻辑仿函数
//逻辑非  logical_not

void test01()
{
    vector<bool> v; 
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    for(vector<bool>::iterator it = v.begin();it != v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    //利用逻辑非  将容器V搬运到容器V2中并执行取反操作
    vector<bool> v2;
    v2.resize(v.size());  //先给v2开辟好空间  否则搬不进去

    transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());//第一个容器起始迭代器  第一个容器末尾迭代器  第二个容器起始迭代器  仿函数
    
    for(vector<bool>::iterator it = v2.begin();it != v2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    

}

int main()
{
    test01();
    return 0;
}