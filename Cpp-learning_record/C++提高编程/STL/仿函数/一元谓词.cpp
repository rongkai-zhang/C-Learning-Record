#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//仿函数返回值类型是bool数据类型 ，称为谓词
//一元谓词

class GreaterFive
{
public:
    bool operator()(int val)  //有一个参数就叫一元谓词
    {
        return val>5;
    }


};

void test01()
{
    vector<int> v;
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i);

    }

    //查找容器中有没有大于5的数字
    //GreatFive() 匿名的函数对象
    vector<int>::iterator it = find_if(v.begin(),v.end(),GreaterFive()); //find_if 按条件的方式来查找   三个参数 begin end 谓词
    if(it == v.end())
    {
        cout<<"未找到"<<endl;
    }
    else 
    {
        cout<<"找到了大于5的数字为："<< *it<<endl;
    }


}


int main()
{
    test01();


    return 0;
}