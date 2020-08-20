#include <iostream>
using namespace std;

//重载递增运算符

//自定义的整形
class MyInteger
{
    friend ostream &operator<<(ostream &cout, MyInteger myint);

public:
    MyInteger()
    {
        m_Num = 0;
    }


    //重载前置++运算符  返回引用为了一直对一个数据进行操作
    MyInteger & operator++()
    {
        //先进行+运算
        m_Num++;

        //再将自身做返回
        return *this;
    }

    //重载后置++运算符  
    //void operator++(int)  int 代表占位参数，可以用于区分前置还是后置
    MyInteger operator++(int)  //要返回值   如果返回引用 temp是个局部变量函数执行完就被释放了
    {
        //先 记录当时的结果
        MyInteger temp = *this;
        //后  递增
        m_Num++;
        //最后 将记录的结果返回
        return temp;
    }
private:
    int m_Num;
};

//重载左移运算符  
ostream &operator<<(ostream &cout, MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}
void test01()
{
    MyInteger myint;

    cout << ++(++myint) << endl;
    cout <<myint<<endl;
}


void test02()
{
    MyInteger myint;
    cout <<myint++<<endl;
    cout <<myint<<endl;
}
int main()
{

    //test01();
    test02();

    return 0;
}
//前置递增返回引用   后置递增返回值