#include <iostream>
using namespace std;
#include "myArry.hpp"


void printIntArray( MyArry <int> &arr)
{
    for(int i = 0;i<arr.get_Size();i++)
    cout<<arr[i]<<endl;
}

void test01()
{
    MyArry <int>arr1(5);
    for (int i = 0;i<5;i++)
    {
        //利用尾插法像数组中插入数据
        arr1.Push_Back(i);
    }
    cout<<"arr1的打印输出为："<<endl;
    printIntArray(arr1);

    cout<<"arr1的容量为： "<<arr1.getCapacity()<<endl;
    cout<<"arr1的大小为： "<<arr1.get_Size()<<endl;



    MyArry<int>arr2(arr1);
    cout<<"arr2的打印输出为："<<endl;
    printIntArray(arr2); 

    //尾删
    arr2.Pop_Back();
    cout<<"arr2尾删后："<<endl;
    cout<<"arr2的容量为： "<<arr2.getCapacity()<<endl;
    cout<<"arr2的大小为： "<<arr2.get_Size()<<endl;


    // MyArry <int>arr3(100);
    // arr3 = arr1;
}


//测试自定义数据类型
class Person
{
public:
    Person(){}
    Person(string name, int age)
    {
        this->m_Namg = name;
        this->m_Age = age;
    }

    string m_Namg;
    int m_Age;
};
 
void printPersonArray(MyArry<Person> &arr)
{
    for(int i =0;i<arr.get_Size();i++)
    {
        cout<<"姓名："<<arr[i].m_Namg<<"  年龄："<<arr[i].m_Age<<endl;
    }
}

void test02()
{
    MyArry<Person> arr(10);
    Person p1("关羽",999);
    Person p2("赵云",20);
    Person p3("张飞",30);
    Person p4("马超",40);
    Person p5("黄忠",60);

    //将数据插入到数组中
    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    arr.Push_Back(p4);
    arr.Push_Back(p5);

    //打印数组
    printPersonArray(arr);

    //输出容量
    cout<<"arr的容量为："<<arr.getCapacity()<<endl;

    //输出大小
    cout<<"arr的大小为："<<arr.get_Size()<<endl;

}


int main()
{
    
    // test01();
    test02();
    return 0;
}